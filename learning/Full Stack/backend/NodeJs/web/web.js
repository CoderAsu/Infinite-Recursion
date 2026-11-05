
const http = require("http");
const fs = require("fs");
const qs = require("querystring");

let arg = process.argv;
const port = arg[2];

http.createServer((req, res) => {
    fs.readFile("web.html", "utf-8", (err, data) => {
        if (err) {
            res.writeHead(500, { "Content-Type": "text/plain" });
            res.end("Internal server error");
            return;
        }

        let url = req.url;

        res.writeHead(200, { "Content-Type": "text/html" });

        if (url == "/") {
            res.write(data);
            res.end();

        } else if (url == "/submit") {

            let dataBody = [];

            req.on('data', chunk => {
                dataBody.push(chunk);
            })

            req.on('end', () => {
                let rawData = Buffer.concat(dataBody).toString();
                let readableData = qs.parse(rawData);
                console.log("Data:", readableData);

                let dataString = `Name: ${readableData.name}\nEmail: ${readableData.email}`;

                console.log(dataString);

                fs.writeFile("data.txt", dataString, 'utf-8', (err) => {
                    if(err){
                        console.log("Internal server error!");
                        return false;
                    } else {
                        console.log("Data Saved");
                    }
                });
    
                res.write(`<h1>Data Submitted Successfully!</h1> <br>`);
                res.end(`<a href="/">Go to Home</a>`);
            })

        } else {
            res.writeHead(404, { "Content-Type": "text/plain" });
            res.end("Page Not Found");
        }
    });
}).listen(port);

console.log(`Server running at http://localhost:${port}`);

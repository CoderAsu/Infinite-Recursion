const http = require("http");
const {log} = require("console");

http.createServer((req, res) => {
    res.writeHead(200, {"content-type": "text/html"});
    log(req.url);
    log(req.headers.host);
    log(req.method);

    let url = req.url;

    if(url == "/"){
        res.write("<h1>Home Page</h1>");
        res.end();
    } else if(url == "/about"){
        res.write("<h1>About</h1>");
        res.end();
    } else {
        res.write("<h1>Other page</h1>");
        res.end();
    }
    res.end();
}).listen(5634);

const http = require("http");

http.createServer((req, res) => {
    res.writeHead(200, {"content-type": "text/html"});
    res.write("<h1>This is server</h1><br>");
    res.write("I am using nodejs <br>");
    res.end("Hello World!");
}).listen(3500);
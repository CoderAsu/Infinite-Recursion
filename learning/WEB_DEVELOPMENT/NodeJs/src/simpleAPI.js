const http = require("http");


const userData = {
    name: "Jinwoo",
    age: 24,
    email: "jinwoo@gmail.com"
}

http.createServer((req, res) => {
    res.setHeader("Content-Type", 'application/json')
    res.write(JSON.stringify(userData));
    res.end();
}).listen(4200);
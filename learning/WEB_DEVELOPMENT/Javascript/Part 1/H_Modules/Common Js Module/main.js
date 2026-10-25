let hel = require("./module1.js");
hel.hello();

let sayHi = require("./module2.js");
sayHi();

let a = require("./module3.js");
a.sum(3, 4);
console.log(a.name);
var x = Symbol();
var x = Symbol("Hello"); // Unique value

var y = Symbol("Hello");

console.log(x == y);
console.log(x === y);
console.log(x);
console.log(typeof x);

console.log(x.description);

console.log(x.toString());








let age = Symbol("age");

let user = {
    name: "Asu",
    [age]: 21
}

console.log(user);


user[age] = 25;

console.log(user);
console.log(user[age]);
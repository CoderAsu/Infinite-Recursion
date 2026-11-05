let num = 100000000;

console.log(num.toLocaleString());
console.log(num.toLocaleString("en-US"));
console.log(num.toLocaleString("en-IN", {style: "currency", currency: "INR"}));

console.log(typeof num.toLocaleString());
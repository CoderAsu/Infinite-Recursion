let num = 33;
let bNum = 1234567890123456;
let vbNum = 12345678901234567;
let vvbNum = 123456789012345678876;
let str = "123";
let div = 5/2;
let pointNumbers = 4334.45454;
let anotherNum = 123e5;


console.log(Number.isInteger(bNum));
console.log(Number.isInteger(vbNum));
console.log(Number.isInteger(vvbNum));
console.log(Number.isInteger(str));
console.log(Number.isInteger(div));
console.log(Number.isInteger(pointNumbers));
console.log(Number.isInteger(anotherNum));


console.log(typeof Number.isInteger(bNum));


let inf = Infinity;
console.log(Number.isFinite(inf));
console.log(Number.isFinite(num));

console.log(typeof Number.isFinite(inf));



let dummy = "hello";
let dummy1 = "hello" + 34;
let dummy2 = 0/0;
let dummy3;
let dummy4 = Number(dummy);
console.log(Number.isNaN(num));
console.log(Number.isNaN(dummy));
console.log(Number.isNaN(dummy1));
console.log(Number.isNaN(dummy2));
console.log(Number.isNaN(dummy3));
console.log(Number.isNaN(dummy4));

console.log(typeof Number.isNaN(num));



let exponent = 2 ** 56;
let expo1 = 2 ** 52;
console.log(Number.isSafeInteger(num));
console.log(Number.isSafeInteger(exponent));
console.log(Number.isSafeInteger(expo1));


console.log(typeof Number.isSafeInteger(num));

// safe integer is between -(2 ** 53 - 1) to (2 ** 53 - 1)
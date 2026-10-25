// JavaScript has only one type of number. Numbers can be written with or without decimals.

let x = 3.14;
let y = 3;
let z = Number(7);
let u = Number("343")

console.log(typeof x, x);
console.log(typeof y, y);
console.log(typeof z, z);
console.log(typeof u, u);


let num = 123e5;
let num1 = 123e-5;

console.log(typeof num, num);
console.log(typeof num1, num1);




// Integers(number without a period or exponent notation) are accurate up to 15 digits.

let num2 = 999999999999999;
let num3 = 9999999999999999;

console.log(num2);
console.log(num3);



// Floating point arithmetic is not always 100% accurate.

let num4 = 0.2 + 0.1;
console.log(num4);


// NaN is a javascript reserved word indicating that a number is not a legal number.

let num5 = 100 / "Apple";
console.log(num5);
console.log(typeof NaN);



// Infinity (or -Infinity) is the value JavaScript will return if you calculate a number outside the largest possible number.

// division by 0 also generates Infinity

let num6 = 2/0;
let num7 = -2/0;
console.log(num6);
console.log(num7);

console.log(typeof Infinity);
console.log(typeof -Infinity);





// Numbers as Objects
let num8 = 123;
let num9 = new Number(123);

console.log(typeof num8);
console.log(typeof num9);

console.log(num8 == num9);
console.log(num8 === num9);

// comparing two js objects always returns false.

// Do not create number objects.
// The new keyword complicates the code and slows down the execution speed.
// Number objects can produce unexpected results.



let bin = 0b101010;
let oct = 0o343637;
let hex = 0x34af;

console.log(bin);
console.log(oct);
console.log(hex);
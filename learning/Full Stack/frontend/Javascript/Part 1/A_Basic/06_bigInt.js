// JavaScript BigInt variables are used to store big integer values that are too big to be represented by a normal JavaScript Number.

// In javascript, all numbers are stored in a 64-bit floating-point format. With this standard, large integer cannot be exactly represented and will be rounded. Because of this, JavaScript can only safely represent integers: Up to 9007199254740991 +(2^53-1) and Down to -9007199254740991 -(2^53-1).

// Integer values outside this range lose precision.

let x = 9999999999999999;
let y = 9999999999999999n;
let z = BigInt(1234567890123456789012345n);

console.log(typeof x, x);
console.log(typeof y, y);
console.log(typeof z, z);


// Arithmetic between a BigInt and a Number is not allowed (type conversion lose information).

// Unsigned right shift (>>>) can not be done on a BigInt (it does not have a fixed width).


// A BigInt can not have decimals.

let num1 = 5n;
let num2 = 2;
// console.log(num1/num2); // Error: Cannot mix BigInt and other types, use explicit conversion.


// BigInt can also be written in hexadecimal, octal, or binary notation.

let hex = 0x20000000000003n;
let oct = 0o400000000000000003n;
let bin = 0b100000000000000000000000000000000000000000000000000011n;

console.log(hex);
console.log(oct);
console.log(bin);


// Rounding can compromise program security.
console.log(9007199254740992 === 9007199254740993);
console.log(9007199254740992n === 9007199254740993n);
console.log(9007199254740991 === 9007199254740990);
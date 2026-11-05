// JavaScript has 8 datatypes
/* 
=> Number
=> Bigint
=> String
=> Boolean
=> Undefined
=> Null
=> Symbol
=> Array
=> Object
*/


// The object data type can contain both built-in objects, and user defined objects.

// Built-in object types can be: objects, arrays, dates, maps, sets, intarrays, floatarrays, promises, and more.

// A Javascript variable can hold any type of data.















// When adding a number and a string, JavaScript will treat the number as a string.

let x = 16 + 'hello';
console.log(x);


// JavaScript evaluates expressions from left to right. Different sequences can produce different results.

let y = 16 + 4 + 'welcome';
console.log(y);

let z = 'js' + 16 + 14;
console.log(z);


// JavaScript has dynamic types. This means that the same variable can be used to hold different data types.

let a;  // Now a is undefined
a = 5;  // Now a is Number
a = "John" // Now a is String
console.log(a);

















// Most programming languages have many number types:

// Whole numbers (integers):
// byte (8-bit), short (16-bit), int (32-bit), long (64-bit)

// Real numbers (floating-point):
// float (32-bit), double (64-bit).

// Javascript numbers are always one type:
// double (64-bit floating point).



// You can empty an object by setting it to null and to undefined.





















// Strings
// A string (or a text string) is a series of characters. Strings are written with quotes whether it is single or double.

let carName1 = "Ferrari";
let carName2 = 'Bugatti';


// Numbers
// All JavaScript numbers are stored as decimal numbers (floating point). Numbers can be written with, or without decimals.

let num1 = 34.00;
let num2 = 34;


// Exponential Notation
// Extra large or extra small numbers can be written with scientific (exponential) notation.

let expNot1 = 123e5;    // 12300000
let expNot2 = 123e-5;   // 0.00123



// BigInt
// JavaScript BigInt is a new datatype (ES2020) that can be used to store integer values that are too big to be represented by a normal JavaScript Number.

let bigInt = 3648763874678634663n;


// Booleans
// Booleans can only have two values: true or false. Booleans are often used in conditional testing.

let bool = true;
let bool2 = false;


// Undefined
// In JavaScript, a variable without a value, has the value undefined. The type is also undefined. Any variable can be emptied, by setting the value to undefined. The type will also be undefined.

let car;    // value is undefined, type is undefined
let car2 = undefined;


// Null
// In JavaScript null is "nothing". It is supposed to be something that doesn't exist. Unfortunately, in JavaScript, the data type of null is an object.

let temp = null;


// Arrays
// JavaScript arrays are written with square brackets. Array items are separated by commas.

const fruits = ["Apple", "Banana", "Mango"];

// Array indexes are zero-based, which means the first item is [0], second is [1], and so on.


// Objects
// JavaScript objects are written with curly braces {}. Object properties are written as name:value pairs, separated by commas.

const person = {firstName:"John", lastName:"Doe", age:50, eyeColor:"blue"};


















// Comparison of Datatypes

console.log(2 > 1);
console.log(2 < 1);
console.log(2 >= 1);
console.log(2 <= 1);
console.log(2 == 1);
console.log(2 != 1);
console.log(2 === 1);
console.log(2 !== 1);
console.log(2 === "2");
console.log(2 == "2"); 
// 2 == "2" => 2 == 2 => true
// 2 === "2" => 2 === 2 => false
// == => value comparison
// === => value and type comparison
// != => value not equal to
// !== => value and type not equal to 
console.log();
console.log()






















// Datatype summary
// Primitive Data Types (stack memory): Number, String, Boolean, Undefined, Null, Symbol, BigInt

const name = "JavaScript";

const score = 100;
const scoreValue = 100.3;

const isLoggedIn = false;
const outsideTemp = null;
let userEmail;



const id = Symbol("123");
const anotherId = Symbol("123");
console.log(id === anotherId); // false

const bigIntValue = 12345678901234n;



// Non-Primitive/Reference Data Types (heap memory): Object, Array, Function

const heroes = ["Ironman", "Thor", "Hulk", "Captain America"];


const user = {
    name: "John",
    age: 33,
};


function greet() {
    console.log("Hello World!");
}
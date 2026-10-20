// The typeof operator returns the data type of a JavaScript variable.

// Primitive Data Types
/* 
JavaScript has 7 primitive data types:
=> string
=> number
=> boolean
=> bigint
=> symbol
=> null
=> undefined
*/

let num = 3;
console.log(num, typeof num);
console.log(typeof(num));




let str = "Hello";
console.log(str, typeof str);


let bool = true;
console.log(bool, typeof bool);


let n = null;
console.log(n, typeof n);


let u;
console.log(u, typeof u);


let sym = Symbol("symbol");
console.log(sym, typeof sym);


let bigInt = 1234567890123456789012345678901234567890n;
console.log(bigInt, typeof bigInt);


















// Complex Data Types (Non-primitive)
// A complex data type can store multiple values and/or different data types together.

// JavaScript has one complex data type: i.e object.

// All other complex types like arrays, functions, sets, and maps are just different types of objects.

// The typeof operator returns only two types:
// object
// function

console.log(typeof {name: "John"});
console.log(typeof [1, 2, 3, 4]);
console.log(typeof new Map());
console.log(typeof new Set());
console.log(typeof new Date());
console.log(typeof function(){});





















// How to Recognize an Array
// How to know if a variable is an array?
// ECMAScript 5 (2009) defined a new method for this: Array.isArray().

const fruits = ["apples", "bananas", "oranges"];
console.log(Array.isArray(fruits));



// The instanceof Operator
// The instanceof operator returns true if an object is an instance of a specified object type.

const time = new Date();
console.log(time instanceof Date);


console.log(fruits instanceof Array);



const fruitsMap = new Map([["apples", 500],
["bananas", 300], ["oranges", 200]]);

console.log(fruitsMap instanceof Map);


const heros = new Set(["Ironman", "Hulk", "Thor"]);

console.log(heros instanceof Set);


const user = {
    name: "Asu",
    age: 21
}

console.log(user instanceof Object);

















// Undefined Variables
// The typeof an undefined variable is undefined.

let car;
console.log(car, typeof car);

let car2 = '';
console.log(car2, typeof car2);

let car3 = undefined;
console.log(car3, typeof car3);



// Null
// In JavaScript null is "nothing". It is supposed to be something that doesn't exist.
// Unfortunately, in JavaScript, the data type of null is an object.
// You can empty an object by setting it to null.

let person = null;
console.log(person, typeof person);



console.log(null === undefined);
console.log(null == undefined);



















// The constructor Property
// The constructor property returns the constructor function for all JavaScript variables.

console.log(String("hello").constructor);
console.log(Number(23).constructor);
console.log(Boolean(true).constructor);
console.log(BigInt(3434343467576767).constructor);
console.log(Symbol("abc").constructor);
console.log({name:'John',age:34}.constructor);
console.log([1,2,3,4].constructor);
console.log(new Date().constructor);
console.log(new Set().constructor);
console.log(new Map().constructor);
console.log(function () {}.constructor);








// The data type of NaN (Not a Number) is number !
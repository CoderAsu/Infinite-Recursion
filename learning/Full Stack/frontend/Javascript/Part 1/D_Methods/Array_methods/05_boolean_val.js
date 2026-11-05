// isArray()
const fruits = ["Banana", "Orange", "Apple", "Mango"];

let bool = Array.isArray(fruits);
console.log(typeof bool, bool);


// The isArray() method returns true if an object is an array, otherwise false.

// Array.isArray() is a static property of the JavaScript Array object.

// You can only use it as Array.isArray().

// Using x.isArray(), where x is an array will return error.













// includes()
let include = fruits.includes("Mango");
console.log(typeof include, include);

// The includes() method returns true if an array contains a specified value.

// The includes() method returns false if the value is not found.

// The includes() method is case sensitive.















// some()
let ages = [10, 13, 18, 20];

let check = ages.some(checkAdult);

function checkAdult(age){
    return age >= 18;
}

console.log(check);


// The some() method checks if any array elements pass a test (provided as a callback function).

// The some() method executes the callback function once for each array element.

// The some() method returns true (and stops) if the function returns true for one of the array elements.

// The some() method returns false if the function returns false for all of the array elements.

// The some() method does not execute the function for empty array elements.

// The some() method does not change the original array.
















// every()
let ages2 = [22, 34, 18, 20];

let check2 = ages2.every(checkAdult);

function checkAdult(age){
    return age >= 18;
}

console.log(check2);

// The every() method executes a function for each array element.

// The every() method returns true if the function returns true for all elements.

// The every() method returns false if the function returns false for one element.

// The every() method does not execute the function for empty elements.

// The every() method does not change the original array


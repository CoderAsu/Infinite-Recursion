
// The Object.keys() method returns an array with the keys of an object.

const person = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
};

let keys = Object.keys(person);
console.log(keys);




// The Object.values() method returns an array of the property values of an object.

let values = Object.values(person);
console.log(values);




// The Object.entries() method returns an array of the key/value pairs of an object.

let keyVal = Object.entries(person);
console.log(keyVal);





// The fromEntries() method creates an object from a list of key/value pairs.


let newObj = Object.fromEntries(keyVal);
console.log(newObj);



const fruits = [
    ["apples", 300],
    ["pears", 900],
    ["bananas", 500]
];


let newObj2 = Object.fromEntries(fruits);
console.log(newObj2);



// These three methods above return an Iterable (enumerable array).

// Iterables makes it simpler to use objects in loops and to convert objects into maps.

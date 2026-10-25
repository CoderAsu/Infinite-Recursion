// The toString() method returns an object as a string.

// The toString() method returns "[object Object]" if it cannot return a string.

// Object.toString() always returns the object constructor.

// The toString() method does not change the original object.

const person = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
}

const keys = person.toString();
console.log(keys);



const person2 = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
  };
  const keys2 = Object.toString(person);

console.log(keys2);






// The valueOf() method returns the primitive value of an object.

// If the object has no primitive value, valueOf() returns the object itself.

// The valueOf() method does not change the original object.

const fruits = ["Banana", "Orange", "Apple", "Mango"];
const myArray = fruits.valueOf();
console.log(myArray);

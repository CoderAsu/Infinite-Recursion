// Object.seal() allows modifications, but prevents additions and deletions of properties.

// The Object.seal() method will fail silently in non-strict mode.

// The Object.seal() method will throw a TypeError in strict mode.

// The Object.isSealed() method can be used to check if an object is sealed.

const person = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
};

let seal = Object.seal(person);

person.firstName = "Jack";
person.nationality = "English";
delete person.lastName;

console.log(seal);
console.log(person);


// Object.isSealed() returns true if an object is sealed.

let isSealed = Object.isSealed(person);
console.log(isSealed);
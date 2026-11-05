// Object.freeze() prevents modifications, additions and deletions of properties.

// The Object.freeze() method will fail silently in non-strict mode.

// The Object.freeze() method will throw a TypeError in strict mode.

const person = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
};

let freezePerson = Object.freeze(person);

person.age = 51;
person.nationality = "English";
delete person.lastName;
console.log(person);
console.log(freezePerson);





// The Object.isFrozen() returns true if an object is frozen.

let isFrozen = Object.isFrozen(person);
console.log(isFrozen);
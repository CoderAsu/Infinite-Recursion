// The Object.assign() method copies properties from one or more source objects to a target object.


// Object.assign(target, source(s))

const person1 = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
};

const person2 = {firstName: "Jake", lastName: "Sparrow"};

let result = Object.assign(person1, person2);

console.log(result);

let result2 = Object.assign(person1, person2, {nationality: "English"});

console.log(result2);








// The Object.create() creates an object from an existing object.

const person3 = {
    firstName: "John",
    lastName: "Doe"
};

const man = Object.create(person3);
man.firstName = "Peter";

console.log(person3);
console.log(man);

console.log(man.lastName);

// All properties of the man have not own property, it is in the prototype.
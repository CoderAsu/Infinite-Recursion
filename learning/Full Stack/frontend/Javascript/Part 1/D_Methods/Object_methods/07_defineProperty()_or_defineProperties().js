// The Object.defineProperty() and Object.defineProperties() method add or change an object property.

// The Object.defineProperty() and Object.defineProperties() method let you change property metadata.

// The Object.defineProperty() and Object.defineProperties() method let you add getters and setters.


// Object.defineProperty(object, property, descriptor)

const person = {
    firstName: "John",
    lastName: "Doe",
};

Object.defineProperty(person, "year", {value: "2008", writable: true, enumerable: false, configurable: true});

person.language = "EN";

console.log(person);
console.log(person.year);













// Object.defineProperties(object, descriptors)

const person2 = {
    firstName: "John",
    lastName: "Doe"
}

Object.defineProperties(person2, {
    language: {value: "en", writable: false, enumerable: false, configurable: true},
    year: {value: "Hello", writable: true, enumerable: true, configurable: false}
});

console.log(person2);

console.log(person2.year);


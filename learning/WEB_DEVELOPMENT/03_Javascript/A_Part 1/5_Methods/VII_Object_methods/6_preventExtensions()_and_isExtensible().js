// Object.preventExtensions() allows modifications, but prevents addition of properties.

const person = {firstName:"John", lastName:"Doe"};

let preventExtensions = Object.preventExtensions(person);

person.firstName = "Jack";
person.nationality = "English";
delete person.lastName;
console.log(person);
console.log(preventExtensions);



// Object.isExtensible() returns true if an object is extensible.

let isExtensible = Object.isExtensible(person);
console.log(isExtensible);


const person2 = {firstName:"John", lastName:"Doe"};
let isExtensible2 = Object.isExtensible(person2);
console.log(isExtensible2);
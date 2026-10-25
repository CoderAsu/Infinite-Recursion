// Sometimes we need to create many objects of same type. To create an object type we use an object constructor function. It is considered good practice to name constructor functions with an upper-case first letter.

// A value given to a property will be a default value for all objects created by the constructor.

function Person(first, last, age, eye) {
    this.firstName = first;
    this.lastName = last;
    this.age = age;
    this.eyeColor = eye;
    this.nationality = "English";

}

// In the constuctor function, this has no value.
// The value of this will become the new object when a new object is created.

const myFather = new Person("John", "Doe", 50, "blue");
const myMother = new Person("Sally", "Rally", 48, "green");
const mySister = new Person("Anna", "Rally", 18, "green");
const mySelf = new Person("Johnny", "Rally", 22, "green");


// adding a property to an object
// The new property will be added to myFather. Not to any other Person Objects.
myFather.working = false;
console.log(myFather.working);


// adding a property to a constructor
// To add a new property, you must add it to the constructor function prototype.
Person.prototype.working = true;

console.log(mySelf.working);


// adding a method to an object
// The new method will be added to myMother. Not to any other Person Objects.
myMother.changeName = function(name) {
    this.lastName = name;
}

myMother.changeName("Jane");
console.log(`My mother's full name is ${myMother.firstName} ${myMother.lastName}`);


// adding a method to a constructor
// Adding a new method must be done to the constructor function prototype.
Person.prototype.changeName = function(name) {
    this.lastName = name;
}

mySister.changeName("Jane");
console.log(mySister);












// JavaScript has built-in constructors for all native objects.
/* 
=> new Object()   // A new Object object
=> new Array()    // A new Array object
=> new Map()      // A new Map object
=> new Set()      // A new Set object
=> new Date()     // A new Date object
=> new RegExp()   // A new RegExp object
=> new Function() // A new Function object
*/



// Use object literals {} instead of new Object().
// Use array literals [] instead of new Array().
// Use pattern literals /()/ instead of new RegExp().
// Use function expressions () {} instead of new Function().
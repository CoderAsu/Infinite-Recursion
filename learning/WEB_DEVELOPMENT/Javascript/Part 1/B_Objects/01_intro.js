// In real life, objects are things like: houses, cars, people, animals, or any other subjects.

// A real life car has properties like weight and color.
// Car objects have the same properties, but the values differ from car to car.

// A real life car has methods like start and stop.
// Car objects have the same methods, but the methods are performed at different times.


// Objects are variables too. But objects can contain many values.
// It is a common practice to declare objects with the const keyword.













// Defining a Javascript object by:
/* 
=> Using a Object literal
=> Using the new keyword
=> Using an Object Constructor
*/


// An object literal is a list of name:value pairs inside curly braces {}.
// name:value pairs are also called key:value pairs. object literals are also called object initializers.


// An object literal is a list of property names:values inside curly braces {}.

// An object literal is also called an object initializer.


const person = {};

person.firstName = "John";
person.lastName = "Doe";
person.age = 50;
person.eyeColor = "blue";

console.log(person);





const person2 = new Object();

person2.firstName = "Asu";
person2.lastName = "Padhy";
person2.age = 21;
person.eyeColor = "black";

console.log(person2);




// using object constructor

function Student(name, age, course) {
    this.name = name;
    this.age = age;
    this.course = course;
}

const student1 = new Student("Subham", 22, "MCA");
const student2 = new Student("Rahul", 23, "BCA");

console.log(student1.name);  // Subham
console.log(student2.name); // Rahul

console.log(student1.course); // MCA
console.log(student2.course); // BCA


// Both the examples above do exactly the same.
// But, there is no need to use new Object().
// For readability, simplicity and execution speed, use the object literal method.





















// In JavaScript, Objects are King.
// Objects are containers for Properties and Methods.
// Properties are named values. Properties can be primitive values, functions, or even other objects.
// Methods are Functions stored as Properties.

// In JavaScript, almost "everything" is an object.
// Objects, Maths, Functions, Dates, Arrays, Maps, Sets are objects.
// All JavaScript values, expect primitives, are objects.


// The Primitive value is a value that has no properties or methods.
// A primitive data type is data that has a primitive value.
// JavaScript defines 7 types of primitive data types.
// Primitive values are immutable (they are hardcoded and cannot be changed).
// If x = 3.14, you can change the value of x, but you cannot change the value of 3.14.



// Objects are mutable: They are addressed by reference, not by value.
const x = person;
// The object x is not a copy of person. The object x is person.
// The object x and the object person share the same memory address.
// Any changes to x will also change person.

x.age = 10;

console.log(person.age);




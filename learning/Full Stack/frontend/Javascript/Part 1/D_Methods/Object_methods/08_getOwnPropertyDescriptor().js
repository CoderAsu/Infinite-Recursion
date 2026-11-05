// The Object.getOwnPropertyDescriptor() method returns the property descriptors of an object.

// The Object.getOwnPropertyDescriptor() method does not change the original object.


const person = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
};

let descriptor = Object.getOwnPropertyDescriptor(person, "age");

console.log(descriptor);



















// The Object.getOwnPropertyDescriptors() method returns the property descriptors of an object.

// The Object.getOwnPropertyDescriptors() method does not change the original object.

let descriptors = Object.getOwnPropertyDescriptors(person);

console.log(descriptors);




















// The Object.getOwnPropertyNames() method returns an array with the properties of an object.

// The Object.getOwnPropertyNames() method does not change the original object.

let props = Object.getOwnPropertyNames(person);
console.log(props);












const person2 = {
    __proto__: person,
}

let props2 = Object.getOwnPropertyNames(person2);
console.log(props2);















// Writable: Determines whether the value of the property can be chaged.
// If writable:true, the value can be modified.


// Enumerable: Specifies whether the property will show up during enumeration of the object's properties, like with a loop or.
// If enumerable:true, the property is listed during enumeration.


// Configurable: Controls whether the property can be deleted or its attributes (like , , or even ) can be modified.
// If configurable:true, you can use delete to remove the property or change its descriptors.

// The constructor property returns the function that created the Object prototype.


// For JavaScript objects the constructor property returns:
// function Object() { [native code] }

const person = {
    firstName: "John",
    lastName: "Doe",
    age: 50,
    eyeColor: "blue"
};

console.log(person.constructor);
console.log(Object.constructor);


  
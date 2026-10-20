// The with keyword in JavaScript is used to extend the scope chain temporarily, allowing you to work with an object's properties without repeatedly referencing the object itself. However, it is deprecated and not recommended for use in modern JavaScript due to potential issues with readability, maintainability, and performance.




// let obj = {
//     name: "asu",
//     age: 20,
//     a: 10,
//     b: 20
// }

// with (obj){
//     console.log(a + b);
// }

// with (obj){
//     console.log(`Name: ${name} and Age: ${age}`)
// }



// don't use with operator in real time projects
// it doesn't work in strict mode
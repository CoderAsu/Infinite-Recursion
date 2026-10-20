// Functions are Objects
// The typeof operator in JavaScript returns "function" for functions.

// JavaScript functions have both properties and methods.

// The arguments.length property returns the number of arguments received when the function was invoked.


function myFunction2(a, b) {
    console.log(arguments.length);
};

myFunction2(3, 8);
console.log(typeof myFunction2);
console.log();















// Assign properties to a function
// we can attach properties to a function just like we do with an object

function greet(){
    console.log("Hello!");
}

greet.language = "English";
greet.version = 1;

console.log(greet.language);
console.log(greet.version);

greet();
console.log();












// Functions have built-in properties and methods

function add(a, b){
    return a + b;
}

console.log(add.name);
console.log(add.length);
console.log(add.prototype);
console.log(add.toString());
console.log();













// Functions are stored in variables

const myFunction = add;
console.log(myFunction(7, 4));
console.log();












// Functions can be passed as arguments

function greet2(){
    console.log("Welcome to JS!");
}

function execute(callback){
    callback();
}

execute(greet2);
console.log();












// Important technical distinction

console.log(greet2 instanceof Object);
console.log(greet2 instanceof Function);

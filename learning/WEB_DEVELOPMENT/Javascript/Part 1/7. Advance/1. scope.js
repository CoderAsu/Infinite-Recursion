// JavaScript variables have 3 types of scope:
/* 
=> Block scope
=> Function scope / Local scope
=> Global scope
*/














// Block Scope

// Before ES6 (2015), JavaScript variables had only Global Scope and Function Scope.
// ES6 introduced two important new JavaScript keywords: let and const. These two keywords provide Block Scope in JavaScript.
// Variables declared inside a { } block cannot be accessed from outside the block.



// Variables declared with the var keyword can NOT have block scope.
// Variables declared inside a { } block can be accessed from outside the block.


var c = 300;
const b = 90;
let a = 200;

if(true){
    let a = 10;
    const b = 20;
    var c = 30;
    console.log("Inner ", a, b, c)

}


console.log(a);
console.log(b);
console.log(c);

















// Local Scope/ Function Scope

// Variables declared within a JavaScript function, are LOCAL to the function.
// Local variables have function scope. They can only be accessed from within the function.


// Each function creates a new scope.
// Variables defined inside a function are not accessible (visible) from outside the function.


// Since local variables are only recognized inside their functions, variables with the same name can be used in different functions.
// Local variables are created when a function starts, and deleted when the function is completed.



// function using var keyword
var greet = "hello";

function greetMessage()  {
    var greet = "Hello World";
    console.log(greet);
}

greetMessage();
console.log(greet);






// function using let keyword
let print = "Ferrari";

function printMe()  {
    let print = "Mercedes";
    console.log(print);
}

printMe();
console.log(print);





// same variable in different function
function againPrint()  {
    let print = "Mercedes";
    console.log(print);
}

againPrint();






// function using const keyword
const username = "Subham";
function one(){
    const username = "Asu";
    function two(){
        const website = "Youtube";
        console.log(username);
        console.log(website);
    }
    // console.log(website); gives an error
    two();
}
one()
console.log(username);























// Global Scope

// A variable declared outside a function, becomes GLOBAL.
// A global variable has global scope. 


// Global variables can be accessed from anywhere in a JavaScript program.


// If you assign a value to a variable that has not been declared, it will automatically become a GLOBAL variable.


let x = 6;
const y = "even";

function sum(num)  {
    console.log(x + num);
}

sum(3);


if(x === 6) {
    console.log(y);
};




z = "Ironman";

function hero() {
    return z;
};

console.log(hero());




function car(){
    model = "Rolls Royce"
    console.log(model);
};

car();
console.log(model);




boom = "lucky draw";

function jackpot(){
    console.log(boom);
}

jackpot();


// If we use var, let, or const inside function to declare a variable then you can't use it outside the function.
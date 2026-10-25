// JavaScript functions are defined with the function keyword.

// function functionName(parameters) {
//     // code to be executed
// }


// Semicolons are used to separate executable JavaScript statements.
// Since a function declaration is not an executable statement, it is not common to end it with a semicolon.

function sum(num1, num2 /* parameters */){
    console.log(num1 + num2);
}

sum(2, 3); // arguments


function addTwoNumbers(number1, number2){
    let result = number1 + number2;
    return result;
}

console.log(addTwoNumbers(3, 5));














// Function Expressions
// A JavaScript function can also be defined using an expression.


const x = function(a, b) {return a * b};
let z = x(5, 4);
console.log(z);


// The function above is actually an anonymous function (a function without a name).

// Functions stored in variables do not need function names. They are always invoked (called) using the variable name.


// Function expression are mainly used for callbacks and event handlers.

// Function expression uses semi-colon.
console.log();

















// The function() Constructor

// Functions can also be defined with a built-in JavaScript function constructor called Function().

const myFunction = new Function("a", "b", "return a * b");

let y = myFunction(4, 3);
console.log(y);


// Most of the time, you can avoid using the new keyword in JavaScript.

console.log();

















// Function Hoisting

// Hoisting is JavaScript's default behavior of moving declarations to the top of the current scope.

// Hoisting applies to variable declarations and to function declarations.


console.log(myFun(7));

function myFun(y){
    return y * y;
}

// Functions defined using an expression are not hoisted.
console.log();
















// Self-Invoking Functions
// Function expressions can be made "self-invoking".

// Function expressions will execute automatically if the expression is followed by ().

// You cannot self-invoke a function declaration.

(function () {
    console.log("Hello World!");  // I will invoke myself
})();
console.log();
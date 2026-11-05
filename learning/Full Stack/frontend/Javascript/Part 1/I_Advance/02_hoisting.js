// Hoisting is JavaScript's default behaviour of moving declarations to the top.

// A variable can be use before it has been declared.

x = 5;
var x;

console.log(x);




console.log(y);
var y = 10;




// Variables defined with let and const are hoisted to the top of the block, but not initialized. The block code is aware of the variable, but it cannot be used until it has been declared. Using a let variable before it is declared will result in a ReferenceError.

// The variable is in a "temporal dead zone" from the start of the block until it is declared.



// Javascript only hoists declarations, not initializations.



// JavaScript in strict mode does not allow variables to be used if they are not declared.



// we can call a function before function declaration with normal function but this will not work on arrow functions and anonymous function.




sum(5, 6);

function sum(a, b){
    console.log(a + b);
}




/*
multiply(3, 5);  this will cause an error

let multiply = function(a, b){
    console.log(a * b);
    
}

*/ 




/*
divide(4, 2);   this will cause an error

let divide = (a, b) => (console.log(a/b));
*/





// Hoisting works with the var keyword only not (automatically, let and const) and the conditon is that the variable must be declared not assigned.

// Example:
/*
    console.log(x);

    var x;
    x = 10

    // this will work




    console.log(y);

    var y = 10;

    // this won't work because we assign a value to the variable x 

*/
// Arrow Functions
// Arrow functions allows a short syntax for writing function expressions.

// You don't need the function keyword, the return keyword, and the curly brackets.


// ES5
let multiply = function(numb1, numb2) {
    return numb1 * numb2;
}

// or

// ES6
let multiply2 = (numb1, numb2) => numb1 * numb2;

console.log(multiply(12, 6));
console.log(multiply2(14, 4));

// Arrow functions do not have their own this. They are not well suited for defining object methods.

// Arrow functions are not hoisted. They must be defined before they are used.

// You can only omit the return keyword and the curly brackets if the function is a single statement. Because of this, it might be a good habit to always keep them

const multiply3 = (x, y) => { return x * y };

console.log(multiply3(16, 5));






// See the arrow functions

const normal_sum = (a, b) => console.log(a + b);
normal_sum(1, 2);

const sayHi = () => console.log("Hi");
sayHi();

const square = a => console.log(a * a);
square(4);


const add = (a, b) => {
    console.log(`Adding ${a} and ${b}`);
    let sum = a + b;
    return sum;
}


console.log(add(9, 2));
console.log();

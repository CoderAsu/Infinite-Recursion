// Global variables can be made local (private) with closures.

// A local variable is a "private" variable defined inside a function.

// A function can access all variables in the local scope.


// A function remembers variables from its outer scope is called closures.


function outer() {
    let username = "Asu";
    function inner() {
        console.log("inner", username);
    }
    inner();
};

outer();

// console.log(username);






function makeFunc() {
    const greet = "Hello!";
    function displayName() {
        console.log(greet);
    }
    return displayName;
}

const myFunc = makeFunc();
myFunc();






function adder(num){
    function add(b){
        console.log(b + num);
    }
    return add;
}

let addTo5 = adder(5);
addTo5(6);
addTo5(10);
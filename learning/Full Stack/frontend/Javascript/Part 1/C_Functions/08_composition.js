
// Composition is a design technique where you build complex functionality by combining smaller functions or objects, instead of using inheritance.


let add = (a, b) => {
    return a + b;
}


function square(val){
    return val * val;
}

// function compose(fn1, fn2){
//     return function(a , b){
//         return fn2(fn1(a, b));
//     }
// }

//or

let compose = (fn1, fn2) => (a, b) => fn2(fn1(a, b))
const task = compose(add, square);
console.log(task(2, 3));







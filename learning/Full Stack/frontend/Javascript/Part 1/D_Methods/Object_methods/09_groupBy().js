// The Object.groupBy() method groups elements of an object according to string values returned from a callback function.

// The Object.groupBy() method does not change the original object.

// Object.groupBy(iterable, callback)


const fruits = [
    {name:"apples", quantity:300},
    {name:"bananas", quantity:500},
    {name:"oranges", quantity:200},
    {name:"kiwi", quantity:150}
];

function myCallback({quantity}) {
    return quantity > 200 ? "ok" : "low";
}

const result = Object.groupBy(fruits, myCallback);
console.log(result);

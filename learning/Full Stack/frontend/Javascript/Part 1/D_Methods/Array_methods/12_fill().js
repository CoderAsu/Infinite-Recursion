const fruits = ["Banana", "Orange", "Apple", "Mango"];
let fill = fruits.fill("Kiwi");

console.log(fill);
console.log(fruits);



const fruits2 = ["Banana", "Orange", "Apple", "Mango"];

let fill2 = fruits.fill("cherry", 2, 4);

console.log(fill2);






// The fill() method fills specified elements in an array with a value.

// The fill() method overwrites the original array.

// Start and end position can be specified. If not, all elements will be filled.
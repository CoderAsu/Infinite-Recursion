const fruits = ["Banana", "Orange", "Apple", "Mango"];

// array.copyWithin(target, start, end)


let copy = fruits.copyWithin(2, 0);

console.log(copy);
console.log(fruits);


const fruits2 = ["Banana", "Orange", "Apple", "Mango", "Kiwi"];
let copy2 = fruits2.copyWithin(2, 0, 2);

console.log(copy2);



const arr = [1, 2, 3, 4, 5, 6, 7];

let copy3 = arr.copyWithin(3, 0, 2);

console.log(copy3);




// The copyWithin() method copies array elements to another position in an array.

// The copyWithin() method overwrites the existing values.

// The copyWithin() method does not add items to the array.
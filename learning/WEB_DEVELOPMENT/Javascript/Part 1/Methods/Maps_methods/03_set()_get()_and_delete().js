// You can add elements to a Map with the set() method.
// The set() method can also be used to change existing Map values.



const fruits = new Map();

// Set Map Values
fruits.set("apples", 500);
fruits.set("bananas", 300);
fruits.set("oranges", 200);

console.log(fruits);

fruits.set("apples", 800);
console.log(fruits);




// The get() method gets the value of a key in a map.

let getFruit = fruits.get("apples");
console.log(getFruit);




// The delete() method deletes an element from a map.

fruits.delete("oranges");
console.log(fruits);

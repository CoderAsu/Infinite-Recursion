// A JavaScript Set is a collection of unique values.

// Each value can only occur once in a Set.

// The values can be of any type, primitive values or objects.

const letters = new Set(["a", "b", "c", "a"]);
console.log(letters, typeof letters);





const fruits = new Set();

// Add values to the set
fruits.add("Apple");
fruits.add("Cherry");
fruits.add("Banana");
fruits.add("Mango");
fruits.add("Apple");
fruits.add("cherry");

console.log(fruits);


// If you add equal elements, only the first will be saved.






// Iteration
for (let x of fruits){
    console.log(x);
}


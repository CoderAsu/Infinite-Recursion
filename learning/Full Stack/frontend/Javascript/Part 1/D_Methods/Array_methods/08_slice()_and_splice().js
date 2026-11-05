const fruits = ["Banana", "Orange", "Lemon", "Apple", "Mango"];

let citrus = fruits.slice(1, 3);
console.log(citrus);

let myBest = fruits.slice(-3, -1);
console.log(myBest);

console.log(fruits);



// The slice() method returns selected elements in an array, as a new array.

// The slice() method selects from a given start, up to a (not inclusive) given end.

// The slice() method does not change the original array.











// array.splice(index, count, item1, ....., itemX)

const vegs = ["Potato", "Onion", "Brinjal", "Beans", "Capsicum"];

let myFav = vegs.splice(1, 2, "Cabbage", "Bittergourd");

console.log("Removed: ", myFav);
console.log(vegs);

let myFav2 = vegs.splice(2, 0, "Peas", "Carrot", "Brocolli");

console.log("Removed: ", myFav2);
console.log(vegs);




// The splice() method adds and/or removes array elements.

// The splice() method overwrites the original array.
const fruits = ["Banana", "Orange", "Apple", "Mango"];
let text = fruits.toString();

console.log(text);
console.log(typeof text, text);




// The toString() method returns a string with array values separated by commas.

// The toString() method does not change the original array.












let text2 = fruits.valueOf();

console.log(typeof text2, text2);


// The valueOf() method returns the array itself.

// The valueOf() method does not change the original array.

// fruits.valueOf() returns the same as fruits.










const heroes = new Array("Ironman", "Superman", "Doctor Strange", "Hulk", "Flash", "Thor");

let toStr = heroes.toString();
let valOf = heroes.valueOf();

console.log(typeof toStr, toStr);
console.log(typeof valOf, valOf);



// The toString() method can be used to convert a array object into a string.

// The valueOf() method can be used to convert a array object into a array object.
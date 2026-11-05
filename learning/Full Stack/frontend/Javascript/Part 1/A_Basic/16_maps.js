// A Map holds key-value pairs where the keys can be any datatype.

// A Map remembers the original insertion order of the keys.


const fruits = new Map([["apples", 500], ["bananas", 300], ["oranges", 200]]);

console.log(typeof fruits, fruits);






// the set() method

const heroes = new Map();

heroes.set("rank1", "Ironman");
heroes.set("rank2", "Captain America");
heroes.set("rank3", "Thor");

console.log(heroes);




// the get() method

console.log(heroes.get("rank1"));
console.log(heroes.get("rank2"));
console.log(heroes.get("rank3"));





// Difference between JS objects and maps:

// Object
/* 
=> Not directly iterable
=> Do not have a size property
=> Keys must be Strings (or Symbols)
=> Keys are not well ordered
=> Have default keys
*/


// Map
/* 
=> Directly iterable
=> Have a size property
=> Keys must be any datatype
=> Keys are ordered by insertion
=> Do not have default keys
*/
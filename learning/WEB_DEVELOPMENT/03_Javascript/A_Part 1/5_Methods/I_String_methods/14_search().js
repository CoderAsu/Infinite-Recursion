let text = "Mr. Blue has a blue house";

let position = text.search("Blue");
let position2 = text.search("blue");
let position3 = text.search("green");

console.log(typeof position, position);
console.log(position2);
console.log(position3);



// The search() method matches a string against a regular expression **

// The search() method returns the index (position) of the first match.

// The search() method returns -1 if no match is found.

// The search() method is case sensitive.


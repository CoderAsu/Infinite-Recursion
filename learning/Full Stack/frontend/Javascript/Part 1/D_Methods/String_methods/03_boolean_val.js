let text = "Stay positive better days are on their ways"

let result = text.endsWith("ways");
let result1 = text.endsWith("days");

console.log(result);
console.log(result1);


let result2 = text.startsWith("Stay");
let result3 = text.startsWith('days');

console.log(result2);
console.log(result3);



// both endsWith() and startsWith() methods are case sensitive.


let result4 = text.includes("positive");
let result5 = text.includes("is");

console.log(result4);
console.log(result5);


// The includes() method is case sensitive.

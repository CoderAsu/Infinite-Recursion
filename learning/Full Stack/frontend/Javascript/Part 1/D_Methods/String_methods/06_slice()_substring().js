let text = "JavaScript is best.";

let result = text.slice(0, 5);
let result2 = text.slice(-7, -1);
let result3 = text.slice(-15, 10);

console.log(result);
console.log(result2);
console.log(result3);


// The slice() method extracts a part of a string.

// The slice() method returns the extracted part in a new string.

// The slice() method does not change the original string.

// The start and end parameters specifies the part of the string to extract.

// The first position is 0, the second is 1, ...

// A negative number selects from the end of the string.



let result4 = text.substring(0, 10);
let result5 = text.substring(10, 0);

console.log(result4);
console.log(result5);


// The substring() method extracts characters, between two indices (positions), from a string, and returns the substring.

// The substring() method extracts characters from start to end (exclusive).

// The substring() method does not change the original string.

// If start is greater than end, arguments are swapped: (4, 1) = (1, 4).

// Start or end values less than 0, are treated as 0.
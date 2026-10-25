let text = "Hello World!"

console.log(text.length);
console.log(text[1]);
console.log(text.at(3));
console.log(text.charAt(text.length - 1));
console.log(text.charCodeAt(3));
console.log(text.codePointAt(0));
console.log(String.fromCharCode(65));
console.log(String.fromCharCode(72, 69, 76, 76, 79));
console.log(text.indexOf("H"));
console.log(text.indexOf("World"));

let text1 = "Hello planet earth, you are a great planet.";
console.log(text1.indexOf("planet"));
console.log(text1.indexOf("world"));
console.log(text1.lastIndexOf("planet"));
console.log(text1.lastIndexOf("world"));

// The indexOf() and lastIndexOf() method returns -1 if the value is not found.


// The at() method returns the same as [].

// negative indexing can be done with at() but not with charAt().
// at() returns undefined when range exceeds but charAt() returns empty string

console.log(text.at(-1));
console.log(text.charAt(-1));

console.log(text.at(35));
console.log(text.charAt(35));

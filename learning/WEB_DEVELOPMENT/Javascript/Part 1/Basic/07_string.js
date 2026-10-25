// Strings are for storing text. It is written with quotes whether it is single or double.

let text = "Hello World!";
let det = 'JavaScript is a scripting language';
let name = String("Asu");

console.log(typeof text, text);
console.log(det);
console.log(typeof name, name);

let answer1 = "It's alright";
let answer2 = "He is called 'Johnny'";
let answer3 = 'He is called "Johnny"';

console.log(answer1);
console.log(answer2);
console.log(answer3);



// Template Strings
name1 = "Johnny";
let sen = `He's often called ${name1}`;
console.log(sen);
console.log();

// templates allow multiline strings

let text1 = `The quick 
brown fox
jumps over
the lazy   dog`

console.log(`One sentence is ${text1}\n`);






// Escape Character
/* 

\' => single quote
\" => double quote
\\ => backslash
\b => backspace
\f => form feed
\n => New line
\r => carriage return
\t => horizontal tabulator
\v => vertical tabulator

*/


let sen1 = "JavaScript" + " is " + "best."
console.log(sen1);



let sen2 = "Hello \
World"

console.log(sen2);




// String as objects

let x = "John";
let y = new String("John");

console.log(x == y);
console.log(x === y);

// Comparing two JavaScript objects always returns false.


// Do not create string objects.
// The new keyword complicates the code and slows down execution speed.
// String objects can produce unexpected results.


let a = "hel";
let b = String("hel");
console.log(a == b);
console.log(a === b);
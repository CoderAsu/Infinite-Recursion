// REGULAR EXPRESSIONS: BEGINNER LESSON
// A regular expression (RegExp) is a pattern for finding text.
// Think of it like a small search rule.

// 1. Find an exact piece of text
const sentence = "I am learning JavaScript";
const wordRule = /JavaScript/;
console.log("Does the sentence contain JavaScript?", wordRule.test(sentence));
// test() gives true when there is a match and false when there is not.

// 2. Letter case matters by default
console.log("Lowercase search without a flag:", /javascript/.test(sentence)); // false
console.log("Ignore letter case with i:", /javascript/i.test(sentence)); // true
// The i after / means case-insensitive.

// 3. Find numbers and groups of characters
const details = "I have 3 cats and 12 fish";
console.log("Find the first number:", details.match(/\d+/));
// \d means one digit (0 to 9). + means one or more, so \d+ means a whole number.

const codes = "Room 12, Room 45, Room 87";
console.log("Find every number:", codes.match(/\d+/g));
// g means global: find every match instead of stopping after the first.

// 4. A few useful pattern symbols
console.log("Three letters a-z:", /^[a-z]{3}$/i.test("Cat"));
// [a-z] means one letter from a to z.
// {3} means exactly three characters from the previous rule.
// ^ means the start of the text; $ means the end.
// Together, this checks that the whole text is exactly three letters.

console.log("Only digits:", /^\d+$/.test("4821")); // true
console.log("Only digits:", /^\d+$/.test("48ab")); // false

// 5. Replace matching text
const greeting = "Hi Sam. Hi Lee.";
console.log("Replace every Hi:", greeting.replace(/Hi/g, "Hello"));

// 6. Square brackets mean one character from a set
console.log("Find a vowel:", "cat".match(/[aeiou]/)); // finds "a"
// [aeiou] means: match one character that is a, e, i, o, or u.

// Quick reference:
// /cat/      find the exact text "cat"
// /cat/i     find "cat" in any letter case
// /\d/       one digit
// /\d+/      one or more digits
// /[abc]/    one character: a, b, or c
// /^cat$/    the whole text must be exactly "cat"
// /cat/g     find every occurrence of "cat"

// Try changing the text and the pattern, then run this file again.
// These simple patterns teach the basics; real-world email validation needs more care.

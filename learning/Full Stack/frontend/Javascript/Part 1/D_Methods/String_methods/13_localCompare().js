let text1 = "ab";
let text2 = "cd";

let text3 = "hello";
let text4 = "world";

let result = text1.localeCompare(text2); // as a comes before c it gives negative
let result2 = text3.localeCompare(text3); // as all the character matches that's why 0
let result3 = text2.localeCompare(text1); // as c comes before a it give positive

console.log(typeof result, result);
console.log(result2);
console.log(result3);

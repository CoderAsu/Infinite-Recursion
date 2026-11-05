// A type alias lets you give a name to a type so you can reuse it throughout your code.

type Age = number;
let myAge: Age = 22;

console.log(myAge); // 22






// We can create aliases for primitive types such as string, number, bigint, boolean, null, undefined and symbol.

type Username = string;
type Score = number;
type lNum = bigint;
type IsLoggedIn = boolean;
type nothing = null;
type und = undefined;
type id = symbol;

let username: Username = "Asu";
let score: Score = 95;
let balance: lNum = 457475932574893459874n;
let isLoggedIn: IsLoggedIn = true;
let packet: nothing = null;
let unReady: und = undefined;
let myId: id = Symbol("abc");


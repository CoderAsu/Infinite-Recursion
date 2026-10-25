let cars = ["Saab", "Volvo", "BMW"];
console.log(typeof cars, cars);

let colors = Array("Red", "Blue", "Green", "Yellow");

console.log(colors);








let iplTeam = [
    "RCB",
    "MI",
    "CSK"
]

console.log(iplTeam);






const marvelHeroes = [];
marvelHeroes[0] = "SpiderMan";
marvelHeroes[1] = "IronMan";
marvelHeroes[2] = "Captain America";

console.log(marvelHeroes);




const comParts = new Array("Monitor", "CPU", "Keyboard", "Mouse", "UPS");

console.log(typeof comParts, comParts);

// There is no need to use new Array().
// For simplicity, readability and execution speed, use the array literal method.




// Nested Array

const nesArr = [cars, iplTeam, marvelHeroes, comParts];

console.log(nesArr);

console.log(nesArr[1][0]);

console.log();
console.log();



// we can store all seven primitive datatypes as well as with array, object, function, set, map, math, dates, regexp, error, promise, WeakSet, WeakMap, class instance 

let arr = [
    100,                         // Number
    "Asu",                       // String
    true,                        // Boolean
    undefined,                   // Undefined
    null,                        // Null
    { language: "JavaScript" },  // Object
    function () {                // Function
        console.log("Hello!");
    },
    function sayBye(){           // function with name
        console.log("Goodbye!"); 
    }
    [10, 20, 30],                // Array
    100n,                        // BigInt
    Symbol("id"),                // Symbol
    new Set(["a", "b", "c", "a"]),   // Set
    new Map([["Apples", 20], ["Oranges", 30]]),  // Map
    new Date("2026-10-17")      // Date

];

console.log(arr);
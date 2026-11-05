// A JavaScript Boolean represents one of two values: true or false.


let x = 10 > 9;

console.log(typeof x, x);

let y = -0;
let bool = Boolean(y);

console.log(y);
console.log(bool);
console.log()

let z = Boolean(true);
console.log(z);
console.log()



const userEmail = "";

if (userEmail) {
    console.log("Got user email")
} else {
    console.log("Don't get user email")
}
console.log()


// Falsy value
// false, 0, -0, bigint 0n, "", null, undefined, NaN


// Truth values
// "0", "false", " ", [], {}, function(){}


console.log(false == 0);
console.log(false == "");
console.log(0 == "");
console.log();





// Booleans as Objects

let a = false;
let b = new Boolean(false);

console.log(typeof b);
console.log(a == b);
console.log(a === b);
console.log();




// Comparing two JavaScript objects always return false.


let c = true;
let d = Boolean(true);

console.log(c === d);
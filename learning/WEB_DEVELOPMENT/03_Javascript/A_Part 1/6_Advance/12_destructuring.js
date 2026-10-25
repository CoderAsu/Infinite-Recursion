// The destructing assignment syntax unpack object properties into variables.
// It can also unpack arrays and any other iterables.




// Swap the value of two variables
let a = 1;
let b = 2;

[a, b] = [b, a];

console.log(b);
console.log(a);



















// String Destructuring

let greet = "Hello";

let[a1, a2, ...aN] = greet;

console.log(a1);
console.log(a2);
console.log(aN);


















// Swap 2 element in an array

const colors = ["red", "blue", "green", "white"];

[colors[0], colors[3]] = [colors[3], colors[0]];

console.log(colors);



// Assign array elements to variables

const fruits = ["Apple", "Banana", "Orange", "Mango", "Cherry", "Watermelon"];

const [firstFruit, , ThirdFruit, ...extraFruits] = fruits;

console.log(firstFruit);
console.log(ThirdFruit);
console.log(extraFruits);


// Accessing direct element of an Array

const {4: fruit5} = fruits;
console.log(fruit5);

















// Extract Values from objects

const user = {
    name: "Asu",
    age: 21,
};

let {name, age} = user;
console.log(name);
console.log(age);




const user2 = {
    name: "Subham",
    age: 22,
    address: {
        city: 'Bangalore',
        state: "Karnataka"
    }
};

let {name: userName, age: userAge} = user2;

console.log(userName);
console.log(userAge);

let {address: {city: place, state}} = user2;

console.log(place);
console.log(state);



















// function destructuring with object

function userInfo({age, name}) {
    console.log(`My name is ${name} and my age is ${age}.`);
};

userInfo(user);



// function destructuring with array
function king({3: fruit4}) {
    console.log(`The king of fruit is ${fruit4}.`);
};

king(fruits);


function forHealth([apple]) {
    console.log(`An ${apple} keeps doctor away.`)
};

forHealth(fruits);



function citrus([,, sour]) {
    console.log(`The citrus fruit is ${sour}.`);
};

citrus(fruits);




















// Destructuring Map

const priceOfFruits = new Map([
    ["apples", 500],
    ["bananas", 300],
    ["oranges", 200]
])

let [[firstKey, firstVal], [secondKey, secondVal]] = priceOfFruits;

console.log(firstKey, firstVal);
console.log(secondKey, secondVal);


















// Destructuring Set

const mySet = new Set([10, 20, 30, 40, 50]);

const [first, second, third, ...remaining] = mySet;

console.log(first, second, third, remaining);
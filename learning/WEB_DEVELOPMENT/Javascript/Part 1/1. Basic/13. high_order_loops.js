// for of


const arr = [1, 2, 3, 4, 5];

for (const num of arr) {
    console.log(num);
}


const greet = "Hello World!"

for (const char of greet) {
    console.log(char);
}




// Maps

const map = new Map();
map.set("In", "India");
map.set("USA", "United States of America");
map.set("Fr", "France");
map.set("In", "India");

console.log(map);


for (const [key, val] of map) {
    console.log(key, ":-", val);
}




// for in


const myObj = {
    js: "javascript",
    cpp: "C++",
    rb: "ruby",
    swift: "swift by app"
}

for (const key in myObj) {
    console.log(`${key} = ${myObj[key]}`);
}


const programming = ["js", "rb", "py", "java"]

for (const key in programming) {
    console.log(programming[key]);
}

// for(const key in map){
//     console.log(key);
// }

// map is not iterable







// forEach

const cars = ["lamborgini", "buggati", "Rolls Royce"];

cars.forEach( function (val) {
    console.log(val);
})

// or

const iplTeams = ["RCB", "MI", "CSK", "SRH"];

iplTeams.forEach((item) => (console.log(item)));


// or


const char = ["A", "B", "C", "D"]

let access = function(item){
    console.log(item);
}

char.forEach(access);




const ingredients = ["sugar", "salt", "oil", "masala"];

ingredients.forEach((val, index, arr) => (console.log(val, index, arr)));
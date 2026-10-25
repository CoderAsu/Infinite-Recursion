// The forEach() method invokes a function for each set element:

// The forEach() method does not change the original set.


const letters = new Set(["a","b","c"]);

let text = "";

letters.forEach(function(value){
    text += value;
})

console.log(text);
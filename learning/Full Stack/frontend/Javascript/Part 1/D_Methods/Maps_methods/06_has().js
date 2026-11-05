// The has() method returns true if a key exists in a map.

const fruits = new Map([
    ["apples", 500],
    ["bananas", 300],
    ["oranges", 200]
  ]);
  
let isThere = fruits.has("apples");

console.log(isThere);
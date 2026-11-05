// The entries() method returns an iterator object with the [key,values] in a map.

// The entries() method does not change the original map.




const fruits = new Map([
    ["apples", 500],
    ["bananas", 300],
    ["oranges", 200]
]);
  
// List all Entries
for (const x of fruits.entries()) {
    console.log(x);
}













// The forEach() method invokes a function for each map element.

// The forEach() method does not change the original map.

fruits.forEach (function(value, key) {
    console.log(`${key} = ${value}`);
})













// The keys() method returns an iterator object with the keys in a map.

// The keys() method does not change the original map.

for (const x of fruits.keys()) {
    console.log(x);
}













// The values() method returns an iterator object with the values in a map.

// The values() method does not change the original map.


for (const x of fruits.values()) {
    console.log(x);
}
// array.findLast(function(currentValue, index, arr),thisValue)

const ages = [3, 10, 18, 20, 25, 30];

function checkAge(age){
    return age > 18;
}

let result = ages.findLast(checkAge);
console.log(result);







const items = [
    { name: 'Laptop', price: 900 },
    { name: 'Phone', price: 400 },
    { name: 'Tablet', price: 600 },
];
  
const budget = {
    maxPrice: 700,
};
  
// Use `budget` as `thisArg` to access its `maxPrice` property
const lastAffordableItem = items.findLast(function (item) {
    return item.price <= this.maxPrice;
}, budget);
  
console.log(lastAffordableItem);




// The findLast() method returns the value of the last element that passes a test.

// The findLast() method executes a function for each array element.

// The findLast() method returns undefined if no elements are found.

// The findLast() method does not execute the function for empty elements.

// The findLast() method does not change the original array.
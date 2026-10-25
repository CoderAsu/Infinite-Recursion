// array.findLastIndex(function(currentValue, index, arr),thisValue)

const ages = [3, 10, 18, 20, 25, 30];

function checkAge(age){
    return age > 18;
}

let result = ages.findLastIndex(checkAge);
console.log(result);







const products = [
    { name: 'TV', price: 500 },
    { name: 'Phone', price: 300 },
    { name: 'Laptop', price: 800 },
];
  
const priceCriteria = {
    maxPrice: 600,
};
  
// Use `priceCriteria` as `thisArg` to access its `maxPrice` property
const lastAffordableIndex = products.findLastIndex(function (product) {
    return product.price <= this.maxPrice;
}, priceCriteria);
  
console.log(lastAffordableIndex);






// The findLastIndex() method executes a function for each array element.

// The findLastIndex() method returns the index (position) of the last element that passes a test.

// The findLastIndex() method returns -1 if no match is found.

// The findLastIndex() method does not execute the function for empty array elements.

// The findLastIndex() method does not change the original array.
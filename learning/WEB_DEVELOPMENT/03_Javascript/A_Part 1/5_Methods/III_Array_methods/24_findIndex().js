// array.findIndex(function(currentValue, index, arr), thisValue)

const ages = [3, 10, 18, 20];

let result = ages.findIndex(checkAge);

function checkAge(age){
    return age > 18;
}

console.log(result);







const fruits = [
    { name: 'Apple', quantity: 50 },
    { name: 'Banana', quantity: 20 },
    { name: 'Mango', quantity: 30 },
    { name: "Cherry", quantity: 18}
  ];
  
  const threshold = {
    minQuantity: 25,
  };
  
// Use `threshold` as `thisArg` to access its `minQuantity` property
const index = fruits.findIndex(function (fruit) {
    return fruit.quantity < this.minQuantity;
  }, threshold);
  
console.log(index); 







// The findIndex() method executes a function for each array element.

// The findIndex() method returns the index (position) of the first element that passes a test.

// The findIndex() method returns -1 if no match is found.

// The findIndex() method does not execute the function for empty array elements.

// The findIndex() method does not change the original array.

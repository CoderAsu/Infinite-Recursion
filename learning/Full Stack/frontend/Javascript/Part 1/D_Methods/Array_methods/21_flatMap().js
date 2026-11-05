
const Numbers = [1, 2, 3, 4, 5, 6];

// array.flatMap(function(currentValue, index, arr), thisValue)

const myArr = Numbers.flatMap(x => [x, x *10]);
console.log(myArr);


// The flatMap() method maps all array elements and creates a new flat array.

// flatMap() creates a new array from calling a function for every array element.

// flatMap() does not execute the function for empty elements.

// flatMap() does not change the original array.

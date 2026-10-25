const months = ["January", "February", "mar", "April"];

// array.with(index, newValue);


const myMonths = months.with(2, "March");

console.log(myMonths);
console.log(months);


// The with() method updates a specified array element.

// The with() method returns a new array.

// The with() method does not change the original array.
const cars = ["lamborgini", "buggati", "Rolls Royce"];

// const values = cars.forEach((item) => {
//     return item;
// })

// console.log(values); it gives undefined as a result






// filter method


const myNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const newNums = myNums.filter((num) => (num > 4));
console.log(newNums);

// The filter() method creates a new array filled with elements that pass a test provided by a function.

// The filter() method does not execute the function for empty elements.

// The filter() method does not change the original array.







// or


const arr = [];

myNums.forEach((num) => {
    if(num > 4){
        arr.push(num);
    }
})

console.log(arr);















// map method


const myNumbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const newNumns = myNumbers.map((num) => (num + 10));
console.log(newNumns);

// map() creates a new array from calling a function for every array element.

// map() does not execute the function for empty elements.

// map() does not change the original array.









// chaining

const newNums1 = myNumbers
            .map((num) => (num * 10))
            .map((num) => num + 1)
            .filter((num) => (num >= 50));

console.log(newNums1);










// reduce method


const myNums2 = [1, 2, 3];

const myTotal = myNums2.reduce((acc, cur) => {
    console.log(`acc: ${acc} and cur: ${cur}`);
    return acc + cur;
}, 10);

console.log(myTotal);

// The reduce() method executes a reducer function for array element.

// The reduce() method returns a single value: the function's accumulated result.

// The reduce() method does not execute the function for empty array elements.

// The reduce() method does not change the original array.












const shoppingCart = [
    {
        itemName: "js course",
        price: 2999

    },
    {
        itemName: "python course",
        price: 1999

    },
    {
        itemName: "Java course",
        price: 999

    },
    {
        itemName: "Data Science course",
        price: 3999

    }

]

const toPay = shoppingCart.reduce((acc, item) => (acc + item.price), 0);

console.log(toPay);
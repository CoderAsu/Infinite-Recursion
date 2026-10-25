// Creates a new array from an array-like or iterable object.

// Array.from(object, mapFunction, thisValue)

const str = "hello";

const arrFromStr = Array.from(str);
console.log(arrFromStr);
console.log(str);






const num = [1, 2, 3, 4, 5];

const doubled = Array.from(num, x => x *2);
console.log(doubled);






const obj = {factor: 2};

const arrNum = Array.from([1, 2, 3], function(x){
    return x * this.factor;
}, obj);

console.log(arrNum);






// The Array.from() method returns an array from any object with a length property.

// The Array.from() method returns an array from any iterable object.






// Array.from() is a static property of the JavaScript Array object.

// You can only use it as Array.from().

// Using x.from(), where x is an array will return undefined.
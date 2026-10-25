const fruits = ["Banana", "Orange", "Apple", "Mango", "Apple", "Cherry", "Apple"];

let length = fruits.length;
console.log(length);

let fruit = fruits.at(2);
console.log(fruit);
console.log(typeof fruit);

let fruit1 = fruits[3];
console.log(fruit1);

// The at() method returns an indexed element from an array. The at() method returns the same as [].




let fruit2 = fruits.indexOf("Apple");
console.log(fruit2);

let fruit3 = fruits.lastIndexOf("Apple");
console.log(fruit3);

// The indexOf() and lastIndexOf() method return -1 if the value is not found.
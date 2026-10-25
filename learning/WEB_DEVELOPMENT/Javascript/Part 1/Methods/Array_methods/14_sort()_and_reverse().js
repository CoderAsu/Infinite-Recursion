const fruits = ["Banana", "Orange", "Apple", "Mango"];

let sorting = fruits.sort();
console.log(sorting);
console.log(fruits);

// The sort() method sorts the elements of an array.

// The sort() method sorts the elements as strings in alphabetical and ascending order.

// The sort() method overwrites the original array.





const vegs = ["Potato", "Onion", "Brinjal", "Beans", "Capsicum"];

let reverse = vegs.reverse();

console.log(reverse);
console.log(vegs);


// The reverse() method reverses the order of the elements in an array.

// The reverse() method overwrites the original array.






// Decending Order of alphabets in array

let heroes = ["Ironman", "Superman", "Doctor Strange", "Hulk", "Flash", "Thor"]

let decend = heroes.sort().reverse();

console.log(decend);
console.log(heroes);






//Numeric Sorts

// Ascending order
const points = [40, 100, 1, 5, 25, 10];

points.sort(function(a,b){
    return a-b;
})

console.log(points);


// Decending order
const points2 = [43, 3, 60, 21, 92];

points2.sort(function(a, b){
    return b-a;
})

console.log(points2);



// toSorted() and toReversed() creates a new array, doesn't overwrites the original array and does the work same as sort() and reverse().

const subject = ["Maths", "English", "Science", "Computer"];

let sort1 = subject.toSorted();

console.log(sort1);
console.log(subject);


let reverse1 = subject.toReversed();

console.log(reverse1);
console.log(subject)
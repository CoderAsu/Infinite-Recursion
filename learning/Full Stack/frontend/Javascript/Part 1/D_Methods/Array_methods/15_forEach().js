// The forEach() method calls a function for each element in an array.

// The forEach() method is not executed for empty elements.


let a = ["Rahul", "Sanjay", "Aman", "Karan"];

a.forEach(function(item, index){
    console.log(item);
    console.log(index);
})




let numbers = [65, 44, 12, 4];

let myFn = function(item, index, arr){
    console.log(index, item * 10, arr)
};

numbers.forEach(myFn);

console.log(numbers);


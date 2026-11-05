
let arr = [20, 30, 40, 50];

let advSum = (name, course, ...marks) => {
    let sum = 0;

    
    for(let i in marks){
        sum += marks[i];
    }

    console.log(`Hello ${name} of ${course} : ${sum}`)
}

advSum("Asu", "MCA", ...arr);

advSum("Asu", "MCA", [...arr]); // here the output will be 0 + [20, 30, 40, 50] and also this array will implicitly converted into string using .toString() method






var arr2 = [10, 20, 50, 60];

console.log(...arr2);
console.log([...arr2]);




var arr3 = arr2;
arr2.push(25);

console.log(arr3);





var arr4 = [...arr3];
arr3.push(89);
console.log(arr4);





var arr5 = [56, 33, 34, ...arr2, ...arr4];
console.log(arr5)
// here without using concat function we can use spread operator










var obj1 = {name: "Jinwoo"}
var obj2 = {age: 25}

var obj3 = {...obj1, ...obj2};
console.log(obj3);
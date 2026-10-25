const myArr = [[1,2],[3,4],[5,6]];
const newArr = myArr.flat();

console.log(newArr);



const myArr2 = [1, 2, [3, [4, 5, 6], 7], 8, [9, 10, [11, 12]]];
const newArr2 = myArr2.flat(1);

console.log(newArr2);





const another_array = [1, 2, 3, [4, 5, 6], 7, 8, [9, 10, [11, 12, 13], 14]]

const real_another_array = another_array.flat(Infinity);
console.log(real_another_array);


// The flat() method concatenates sub-array elements. 

// The flat() method doesn't overwrite the original array.
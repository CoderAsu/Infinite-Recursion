let num = 15;
console.log(num.valueOf());

let num2 = 834.9485;
console.log(num2.valueOf());

// valueOf() simply returns the primitive value of number.

let num3 = new Number(57);
console.log(typeof num3);

let result = num3.valueOf();
console.log(typeof result, result);

// The valueOf() method can be used to convert a number object into a number.
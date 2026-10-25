
let exp = 123e5;
let exp1 = 123e-5;
let exp2 = 7.5e+3;

console.log(exp.valueOf());
console.log(exp1.valueOf());
console.log(exp2.valueOf());


let fNum = 5.56745;
console.log(fNum.toExponential());
console.log(fNum.toExponential(3));

let fNum1 = 878975.98745;
console.log(fNum1.toExponential());
console.log(fNum1.toExponential(2));
console.log(fNum1.toExponential(3));
console.log(fNum1.toExponential(4));

console.log(typeof fNum.toExponential());
// Bitwise AND
// When a bitwise AND is performed on a pair of bits, it returns 1 if both bits are 1.

/* 

Operation	Result
0 & 0	    0
0 & 1	    0
1 & 0	    0
1 & 1	    1

*/


let a = 0b1010;
let b = 0b1111;

console.log(a & b);












// Bitwise OR
// When a bitwise OR is performed on a pair of bits, it returns 1 if one of the bits is 1.

/* 

Operation	Result
0 | 0	    0
0 | 1	    1 
1 | 0	    1
1 | 1	    1
*/


console.log(a | b);











// Bitwise XOR
// When a bitwise XOR is performed on a pair of bits, it returns 1 if the bits are different.


/* 
Operation	Result
0 ^ 0	    0
0 ^ 1	    1 
1 ^ 0	    1
1 ^ 1	    0 
*/

console.log(a ^ b);












// Bitwise NOT

/* 
a = 0b1010
    +    1
    0b1011
*/

console.log(~a);












// Bitwise Left Shift (Zero Fill) (<<)

/* 
a = 1010
   10100
*/

console.log(a << 1);











// Bitwise Right Shift (Zero Fill) (>>>)

/* 
a = 1010
    01010   0 is discarded and the value is 0101
*/

console.log(a >>> 1);













// Bitwise Right Shift (Sign Preserving) (>>)

console.log(a >> 1);
console.log(-10 >> 1);
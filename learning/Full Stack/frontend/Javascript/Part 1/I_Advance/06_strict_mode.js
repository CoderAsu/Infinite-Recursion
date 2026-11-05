// "use strict"; defines that Javascript code should be executed in "strict mode".

// You can use strict mode in all your programs. It helps you to write cleaner code, like preventing you from using undeclared variables.


// Strict mode is declared by adding "use strict"; to the beginning of a script or a function.


/* 
"use strict";
x = 3.14;   // This will cause an error because x is not declared
*/





/* 
"use strict";
myFunction();

function myFunction(){
    y = 3.14;  // This will also cause an error because y is not declared
}
*/






// Strict mode makes it easier to write "secure" JavaScript.


// Deleting a variable (or object) and function is not allowed.

/* 
"use strict";
let x = 3.14;
delete x;   // This will cause an error
*/





// Duplicating a parameter name is not allowed.

/* 
"use strict";
function x(p1, p1) {};   // This will cause an error
*/





// Writing to a read-only property is not allowed.

/* 
"use strict";
const obj = {};
Object.defineProperty(obj, "x", {value:0, writable:false});

obj.x = 3.14;            // This will cause an error
*/







// Writing to a get-only property is not allowed.

/* 
"use strict";
const obj = {get x() {return 0} };

obj.x = 3.14;            // This will cause an error
*/







// Deleting an undeletable property is not allowed.

/* 
"use strict";
delete Object.prototype; // This will cause an error
*/






// The word "eval" and "arguments" cannot be used as a variable.

/* 
"use strict";
let eval = 3.14;         // This will cause an error


"use strict";
let arguments = 3.14;    // This will cause an error
*/





// The with statement is not allowed.

/* 
"use strict";
with (Math){x = cos(2)}; // This will cause an error
*/








// For security reasons, eval() is not allowed to create variables in the scope from which it was called.







// Reserved keywords cannot be used as variable names in strict mode.
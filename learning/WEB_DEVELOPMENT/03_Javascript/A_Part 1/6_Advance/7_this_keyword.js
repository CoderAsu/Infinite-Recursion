// In JavaScript, the this keyword refers to an object.

// The this keyword refers to different objects depending on how it is used:
/* 
=> In an object method, this refer to the object.
=> Alone, this refers to the global object.
=> In a function, this refers to the global object.
=> In a function, in strict mode, this is undefined.
=> In an event, this refers to the element that received the event.
=> Methods like call(), apply() and bind() can refer this to any object.
*/











// this alone
// When used alone, this refers to the global object because this is running in the global scope.
// In a browser window the global object is [object Window].

let x = this;
console.log(x);

// In strict mode, when used alone, this also refers to the global object.

"use strict";
let y = this;
console.log(y);













// this in a Method
// When used in an object method, this refers to the object.

// In the given example, the fullName method is a method of the user object.

let user = {
    fname: "Asu",
    lname: "Padhy",
    fullName: function() {
        console.log(this);
        return this.fname + " " + this.lname;
        
    }
}

console.log(user.fullName());













// this in a Function (Default)
// In a function, the global object is the default binding for this.
// In a browser window the global object is [object Window].

function fun()  {
    console.log(this);
};

fun();


// in strict mode
// When used in a function, in strict mode, 'this' is undefined.


// "use strict"
// function myFun()  {
//     console.log(this);
// };

// myFun();























// this in Events Handlers
// In HTML event handlers, this refers to the HTML element that received the event.

















// this precedence

/* 
Precedence      Object
    1           bind()
    2           apply() and call()
    3           Object method
    4           Global scope
*/











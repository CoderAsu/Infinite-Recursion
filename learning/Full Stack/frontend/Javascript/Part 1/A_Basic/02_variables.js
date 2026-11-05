// Variables are containers for storing data.

// JavaScript variables can be declared in 4 ways:
/* 
=> Automatically
=> Using var
=> Using let
=> Using const
*/




// The var keyword was used in all JavaScript code from 1995 to 2015.

// The let and const keywords were added to JavaScript in 2015.













// You declare a JS variable with the var or the let keyword. But you can't declare with const keyword.

// After the declaration, the variable has no value (technically it is undefined).

// To assign a value to the variable, use the equal sign.

var fName;
fName = "Asu";

console.log(fName);


let lName;
lName = "Padhy";

console.log(lName);













// You can declare and assign many variables in one statement.

let person = "John Doe", carName = "Mercedes", price = 200;

// A declaration can span multiple lines.

let person2 = "Henry Comb",
carName2 = "Ferrari",
price2 = "300";















// If you re-declare a JS variable declared with var, it will not lose its value.

var bookName = "Gulliver's Travel";
var bookName;

console.log(bookName);



let penName = "Elkos";
penName = "Butterflow";

console.log(penName);
// let PenName = "Cross";  //it gives an error because we can't redeclare using let.



// You can reassign and redeclare a variable using var.

// You can reassign a variable using let but can't redeclare using let.

// You can't reassign and redeclare a variable using const.




















// Important points
/* 
=> let and const have block scope.
=> variables declared with let must be declared before use.
=> Variables declared with let cannot be Redeclared in the same scope.
=> variables defined with const cannot be redeclared and reassigned.
*/


























// Constant objects and arrays
// The keyword const is a little misleading.
// It doesn't define a constant value. It defines a constant reference to a value.

// Because of this you cannot:
/* 
=> reassign a constant value
=> reassign a constant array
=> reassing a constant object
*/

// But you can:
/* 
=> change the element of constant array
=> change the properties of constant object
*/



const person3 = {
    name:"John",
    age: "34"
};

// Modifying properties is allowed

person3.age = 26;
person.city = "NewYork";

// Reassigning the object is not allowed

// person3 = {name: "Ben", age: "22"};
// console.log(person3);
























// Identifiers
// All JavaScript variables must be identified with unique names. These unique names are called identifiers.
// Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

// The general rules for constructing names for variables (unique identifiers) are:
/*
=> Names can contain letters, digits, underscores,and dollar signs.
=> Names can begin with letter, $, _ but not with numbers.
=> Names are case sensititve (y and Y are different variables)
=> Reserved words cannot be used as names.
*/





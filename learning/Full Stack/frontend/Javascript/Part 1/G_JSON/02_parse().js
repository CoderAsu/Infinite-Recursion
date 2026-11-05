// When receiving data from a web server, the data is always a string.
// Parse the data with JSON.parse(), and the data becomes a JavaScript object.


let json = '{"name":"John", "age":30, "city":"New York"}';

const obj = JSON.parse(json);
console.log(obj);


// Make sure the text is in JSON format, or else you will get a syntax error.






// Array as JSON
// When using the JSON.parse() on a JSON derived from an array, the method will return a JavaScript array, instead of a JavaScript object.

const json2 = '["Ford", "BMW", "Audi", "Fiat"]';
const myArr = JSON.parse(json2);
console.log(myArr);







// Exceptions
// Parsing Dates

// Date objects are not allowed in JSON.
// If you need to include a date, write it as a string.


const text = '{"name":"John", "birth":"1986-12-14", "city":"New York"}';
const obj2 = JSON.parse(text);
obj2.birth = new Date(obj2.birth);

console.log(obj2.birth);



// Or, you can use the second parameter, of the JSON.parse() function, called reviver.
// The reviver parameter is a function that checks each property, before returning the value.

const obj3 = JSON.parse(text, function(key, value){
    if(key == "birth"){
        return new Date(value);
    } else{
        return value;
    }
});

console.log(obj3.name);
console.log(obj3.birth);












// Parsing Functions
// Functions are not allowed in JSON.
// If you need to include a function, write it as a string.


const text2 = '{"name":"John", "age":"function () {return 30;}", "city":"New York"}';

const obj4 = JSON.parse(text2);
obj4.age = eval("(obj4.age)");

console.log(obj4.age);


// You should avoid using functions in JSON, the functions will lose their scope, and you would have to use eval() to convert them back into functions.
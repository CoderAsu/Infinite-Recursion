// When sending data to a web server, the data has to be a string. You can convert any JavaScript datatype into a string with JSON.stringify().

const obj = {name: "John", age: 30, city: "New York"};

const myJson = JSON.stringify(obj);

console.log(myJson);

// myJSON is now a string, and ready to be sent to a server.








// Stringify a JavaScript Array
// It is also possible to stringify JavaScript arrays.

const arr = ["John", "Peter", "Sally", "Jane"];

const myJson2 = JSON.stringify(arr);

console.log(myJson2);










// All Data Types
// JSON.stringify() can not only convert objects and arrays into JSON strings, it can convert any JavaScript value into a string.

// In JSON, date objects are not allowed. The JSON.stringify() function will convert any Date objects into strings.

const newObj = {name: "John", today: new Date(), city : "New York"};

const json4 = JSON.stringify(newObj);

console.log(json4);




// In JSON, functions are not allowed as object values.

// The JSON.stringify() function will remove any functions from a JavaScript object, both the key and the value.

const obj5 = {name: "John", age: function () {return 30;}, city: "New York"};
const myJSON = JSON.stringify(obj5);

console.log(myJSON);



// This can be omitted if you convert your functions into strings before running the JSON.stringify() function.

obj5.age = obj5.age.toString();

const myJSON2 = JSON.stringify(obj5);
console.log(myJSON2);




// If you send functions using JSON, the functions will lose their scope, and the receiver would have to use eval() to convert them back into functions.
// setTimeout() is a JavaScript function that allows you to execute a piece of code or a function after a specified delay (in milliseconds). It's a handy tool for introducing delays or scheduling actions in your code.


setTimeout(() => {
    console.log("Hello");
}, 4000);


const timeoutID = setTimeout(() => {
    console.log('This will not run if timeout is cleared!');
}, 3000); // Executes after 3 seconds
  
// Clear the timeout
clearTimeout(timeoutID);
  
console.log('Timeout cleared.');
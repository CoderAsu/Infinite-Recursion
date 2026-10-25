// Code Debugging
// Programming code might contain syntax error, or logical errors.
// Many of these errors are difficult to diagnose.

// Often, when programming code contains errors, nothing will happen. There are no error messages, and you will get no indications where to search for errors.

// Searching for (and fixing) errors in programming code is called code debugging.


















// JavaScript Debuggers
// Debugging is not easy. But fortunately, all modern browsers have a built-in JavaScript debugger.

// Built-in debuggers can be turned on and off, forcing errors to be reported to the user.

// With a debugger, you can also set breakpoints (places where code execution can be stopped), and examine variables while the code is executing.

// Normally (otherwise follow the steps at the bottom of this page), you activate debugging in your browser with the F12 key, and select "Console" in the debugger menu.





















// Setting Breakpoints
// In the debugger window, you can set breakpoints in the JavaScript code.

// At each breakpoint, JavaScript will stop executing, and let you examine JavaScript values.

// After examining values, you can resume the execution of code (typically with a play button).




function sayHello(name) {
    const greeting = `Hello, ${name}!`;
    debugger;
    console.log(greeting);
}

sayHello("Subham");



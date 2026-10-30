// You can use void with arrow functions, too.

const greet = (): void => {
    console.log("Hello, Asu!");
};

greet();



// we will commonly see this in event handlers and callback functions

const button = document.querySelector("button");

button?.addEventListener("click", (): void => {
    console.log("Button clicked!");
});








const fn: () => void = () => 123;

fn();

// There are two separate parts:
// - fn: () => void — declares the function type: no arguments, void return type.
// - () => 123 — provides the actual arrow function: no arguments, returns 123 at runtime.
// TypeScript permits this assignment because a function returning a value can be used where a void-returning callback is expected. The caller is expected to ignore the result.

// One important detail: void doesn't force the implementation to return nothing in this situation.

// The easiest rule to remember:
// - Before => in a function type: parameter types.
// - After => in a function type: return type.
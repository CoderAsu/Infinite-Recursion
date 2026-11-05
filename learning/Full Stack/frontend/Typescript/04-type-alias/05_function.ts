// We can describe a function's parameters and return type using an alias.

type Add = (a: number, b: number) => number;

const add: Add = (a, b) => {
    return a + b;
};

console.log(add(10, 20)); // 30



// function with void

type Logger = (message: string) => void;

const logMessage: Logger = (message) => {
    console.log(message);
};
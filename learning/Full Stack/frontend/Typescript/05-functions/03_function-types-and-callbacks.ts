// A function type describes the parameters and return value of a function.
type NumberOperation = (left: number, right: number) => number;

const add: NumberOperation = (left, right) => left + right;
const multiply: NumberOperation = (left, right) => left * right;

// A higher-order function receives a callback and uses it later.
function calculate(operation: NumberOperation, left: number, right: number): number {
  return operation(left, right);
}

console.log(calculate(add, 2, 3), calculate(multiply, 2, 3));

export {};

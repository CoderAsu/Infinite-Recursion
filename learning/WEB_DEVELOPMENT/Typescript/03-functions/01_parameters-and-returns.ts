// Parameter types describe inputs; the return type describes the value produced.
function add(left: number, right: number): number {
  return left + right;
}

function greet(name: string): string {
  return `Hello, ${name}!`;
}

console.log(add(2, 3), greet("TypeScript"));

export {};

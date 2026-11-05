// `asserts value is T` tells TypeScript that a successful function call narrowed the value.
function assertIsString(value: unknown): asserts value is string {
  if (typeof value !== "string") {
    throw new Error("Expected a string");
  }
}

const input: unknown = "assertion functions";
assertIsString(input);
console.log(input.toUpperCase());

export {};

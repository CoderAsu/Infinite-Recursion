const input: Element | null = null;

// Assertions tell the compiler what the programmer has verified; they do not add a runtime check.
const inputElement = input as HTMLInputElement | null;
const inputValue = inputElement?.value ?? "no input";

// `!` is a non-null assertion. It removes null/undefined from the type without a runtime check.
// This is safe only when the programmer has already proved the value exists.
const assumedInputElement = input!;

function isString(value: unknown): value is string {
  return typeof value === "string";
}

const value: unknown = "safe narrowing";
console.log(isString(value) ? value.toUpperCase() : inputValue, assumedInputElement === null);

export {};

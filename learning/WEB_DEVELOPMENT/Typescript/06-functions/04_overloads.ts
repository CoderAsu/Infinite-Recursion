// Overloads describe several accepted call shapes; the implementation handles both.
function format(value: number): string;
function format(value: Date): string;
function format(value: number | Date): string {
  return value instanceof Date ? value.toISOString() : value.toFixed(2);
}

console.log(format(3.14159), format(new Date("2024-01-01T00:00:00Z")));

export {};

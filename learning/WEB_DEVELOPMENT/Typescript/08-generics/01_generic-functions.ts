// The same function works for strings, numbers, or any other element type.
function first<T>(items: T[]): T | undefined {
  return items[0];
}

function pair<T, U>(left: T, right: U): [T, U] {
  return [left, right];
}

console.log(first(["one", "two"]), pair("id", 42));

export {};

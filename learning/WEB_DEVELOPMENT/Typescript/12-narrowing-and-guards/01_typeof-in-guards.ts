function renderValue(value: string | number | { label: string }): string {
  if (typeof value === "string") {
    return value.toUpperCase();
  }

  if (typeof value === "number") {
    return value.toFixed(2);
  }

  // The `in` operator narrows an object union by checking for a property.
  if ("label" in value) {
    return value.label;
  }

  return "unknown";
}

console.log(renderValue("hello"), renderValue(3.14), renderValue({ label: "object" }));

export {};

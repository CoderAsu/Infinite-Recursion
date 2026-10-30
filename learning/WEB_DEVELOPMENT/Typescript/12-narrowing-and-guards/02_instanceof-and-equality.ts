function formatValue(value: Date | string | null): string {
  if (value instanceof Date) {
    return value.toISOString();
  }

  // Equality checks can narrow a union too.
  if (value === null) {
    return "No date";
  }

  return value.toUpperCase();
}

console.log(formatValue(new Date("2024-01-01")), formatValue(null), formatValue("today"));

export {};

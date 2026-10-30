// A union accepts one of several types; a literal union accepts only these exact strings.
type Theme = "light" | "dark";
type Id = string | number;

function describeId(id: Id, theme: Theme): string {
  return `${String(id)} uses the ${theme} theme`;
}

const selectedTheme = "dark" as const;
console.log(describeId(42, selectedTheme), describeId("user-1", "light"));

export {};

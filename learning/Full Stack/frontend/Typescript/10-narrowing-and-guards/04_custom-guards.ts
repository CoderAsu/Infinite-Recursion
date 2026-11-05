// A custom type guard returns `value is User` after checking an unknown value.
type User = { name: string; email: string };

function isUser(value: unknown): value is User {
  return (
    typeof value === "object" &&
    value !== null &&
    "name" in value &&
    "email" in value &&
    typeof value.name === "string" &&
    typeof value.email === "string"
  );
}

const value: unknown = { name: "Ada", email: "ada@example.com" };
console.log(isUser(value) ? value.email : "Not a user");

export {};

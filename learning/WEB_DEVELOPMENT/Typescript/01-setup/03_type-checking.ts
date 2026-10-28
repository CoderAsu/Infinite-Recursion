// `@ts-expect-error` documents an intentional compiler error in a lesson.
// The directive itself is TypeScript-specific and fails if the next line is valid.
const validScore: number = 100;
// @ts-expect-error A string cannot be assigned to a number.
const invalidScore: number = "one hundred";

console.log(validScore, invalidScore);

export {};

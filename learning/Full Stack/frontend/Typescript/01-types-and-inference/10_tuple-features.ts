// Tuples can have optional positions, labels, and a variable-length rest section.
type Page = [limit: number, offset?: number];
// or type Page = [number, number?] acts as same
type SearchArguments = [query: number, ...filters: string[]];

const firstPage: Page = [20];
const search: SearchArguments = [54, "beginner", "types"];

function searchLessons(...args: SearchArguments): string {
  return `${args[0]} (${args.length - 1} filters)`;
}

console.log(firstPage, searchLessons(...search));

export {};

// `void` is the usual return type for a function that does not return a useful value.
function logLesson(title: string): void {
  console.log(`Lesson: ${title}`);
}

// `object` means a non-primitive value. It does not mean every object has a `name`.
function objectKeys(value: object): string[] {
  return Object.keys(value);
}

// With strictNullChecks, null and undefined are separate values that must be handled.
const missingDescription: string | null = null;
const notLoaded: string | undefined = undefined;
const description = missingDescription ?? notLoaded ?? "No description";

logLesson(description);
console.log(objectKeys({ title: "Types" }));

export {};

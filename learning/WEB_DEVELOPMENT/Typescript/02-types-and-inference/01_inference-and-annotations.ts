// TypeScript infers the type when the initial value makes it obvious.
const inferredName = "Ada"; // string
const inferredScore = 100; // number

// An annotation is useful when a value is created before its final value exists.
let currentLesson: string;
currentLesson = "Type inference";

function describe(score: number, name: string): string {
  return `${name} scored ${score}`;
}

console.log(describe(inferredScore, inferredName), currentLesson);

export {};

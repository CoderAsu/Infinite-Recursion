const languages: string[] = ["TypeScript", "Python"];
const scores: Array<number> = [95, 88];

// A tuple has a fixed position and type for each item.
const userRecord: [id: number, name: string, active: boolean] = [1, "Ada", true];

languages.push("HTML");
console.log(languages, scores, userRecord);

export {};

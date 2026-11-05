const languages: string[] = ["TypeScript", "Python"];
const scores: Array<number> = [95, 88];

// A tuple has a fixed position and type for each item.
const data: [string, number, boolean, number[]] = ["Jinwoo", 23, true, [99,45, 23, 45]];
const userRecord: [id: number, name: string, active: boolean] = [1, "Ada", true];

languages.push("HTML");
console.log(languages, scores, userRecord);
console.log(data);


export {};

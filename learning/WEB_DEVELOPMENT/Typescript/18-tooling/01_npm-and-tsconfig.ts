// npm manages dependencies and scripts; tsconfig.json defines how this project is checked.
// Keeping the source root and output directory explicit makes build output predictable.
const usefulCommands = ["npm install", "npm run check", "npm run build"] as const;
const compilerRule = "strict: true";

console.log(usefulCommands.join(" -> "), compilerRule);

export {};

// The compiler uses tsconfig.json to decide how to check and emit this source.
// `target` controls output syntax, `module` controls imports/exports, and
// `strict` enables the safest type-checking rules.
const targetLanguage: string = "ES2022";
const outputDirectory: string = "dist/";
const typeCheckingEnabled: boolean = true;

console.log({ targetLanguage, outputDirectory, typeCheckingEnabled });

export {};

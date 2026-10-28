// `typeof import(...)` reads the type shape from an ambient module without loading it.
type LegacyGreeterModule = typeof import("legacy-greeter");
type GreetFunction = LegacyGreeterModule["greet"];

const explainDeclaration: GreetFunction = (name) => `Hello, ${name}`;
console.log(explainDeclaration("from a declaration file"));

export {};

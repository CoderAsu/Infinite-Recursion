
// A const enum is inlined by the compiler and is useful for fixed compile-time choices.
const enum BuildMode {
  Development = "development",
  Production = "production",
}

const mode: BuildMode = BuildMode.Development;
console.log(mode);

export {};

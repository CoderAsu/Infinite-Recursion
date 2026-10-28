// Numeric enum members can use explicit numeric values.
enum HttpStatus {
  Ok = 200,
  NotFound = 404,
}

// A const enum is inlined by the compiler and is useful for fixed compile-time choices.
const enum BuildMode {
  Development = "development",
  Production = "production",
}

const status: HttpStatus = HttpStatus.Ok;
const mode: BuildMode = BuildMode.Development;
console.log(status, mode);

export {};

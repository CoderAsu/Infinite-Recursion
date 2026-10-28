function parseJson(value: string): unknown {
  return JSON.parse(value) as unknown;
}

function assertNever(value: never): never {
  throw new Error(`Unexpected value: ${String(value)}`);
}

// `unknown` requires a check before use. `any` opts out of checks and should be rare.
const parsed: unknown = parseJson('{"ok":true}');
const unsafe: any = { message: "unchecked" };

if (typeof parsed === "object" && parsed !== null) {
  console.log("Parsed an object", unsafe.message);
}

console.log(assertNever as unknown as string);

export {};

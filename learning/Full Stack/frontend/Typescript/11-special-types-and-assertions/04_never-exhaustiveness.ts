type Shape =
  | { kind: "circle"; radius: number }
  | { kind: "square"; side: number };

function impossible(value: never): never {
  throw new Error(`Unhandled shape: ${String(value)}`);
}

function area(shape: Shape): number {
  switch (shape.kind) {
    case "circle":
      return Math.PI * shape.radius ** 2;
    case "square":
      return shape.side ** 2;
    default:
      // If a new Shape member is added, the compiler points here until it is handled.
      return impossible(shape);
  }
}

console.log(area({ kind: "square", side: 4 }));

export {};

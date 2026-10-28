enum Direction {
  Up = "UP",
  Down = "DOWN",
  Left = "LEFT",
  Right = "RIGHT",
}

function move(direction: Direction): string {
  return `Moving ${direction}`;
}

// For many simple cases, this union has no runtime object and is easier to serialize.
type Status = "todo" | "doing" | "done";
const status: Status = "doing";

console.log(move(Direction.Right), status);

export {};

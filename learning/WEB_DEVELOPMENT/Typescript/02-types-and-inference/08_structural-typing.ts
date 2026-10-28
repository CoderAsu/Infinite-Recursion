// TypeScript compares compatible object members. This is called structural typing.
interface Point {
  x: number;
  y: number;
}

function distanceFromOrigin(point: Point): number {
  return Math.sqrt(point.x ** 2 + point.y ** 2);
}

const namedPoint = { x: 3, y: 4, label: "five" };
// Extra properties are allowed when the value already exists and has the required shape.
console.log(distanceFromOrigin(namedPoint));

export {};

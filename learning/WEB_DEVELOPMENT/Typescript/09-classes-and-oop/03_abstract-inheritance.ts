// Abstract classes provide shared behavior while requiring subclasses to implement details.
abstract class Shape {
  abstract area(): number;

  describe(): string {
    return `Area: ${this.area()}`;
  }
}

class Rectangle extends Shape {
  constructor(private readonly width: number, private readonly height: number) {
    super();
  }

  area(): number {
    return this.width * this.height;
  }
}

class Square extends Rectangle {
  constructor(size: number) {
    super(size, size);
  }
}

const shapes: Shape[] = [new Rectangle(4, 5), new Square(3)];
console.log(shapes.map((shape) => shape.describe()));

export {};

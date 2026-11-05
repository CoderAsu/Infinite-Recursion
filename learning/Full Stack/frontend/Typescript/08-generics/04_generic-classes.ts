// A generic class keeps the type of the value it stores.
class Box<T> {
  constructor(private readonly value: T) {}

  get(): T {
    return this.value;
  }
}

const numberBox = new Box(123);
const textBox = new Box<string>("hello");
console.log(numberBox.get(), textBox.get());

export {};

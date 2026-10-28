// `implements` checks that a class fulfills an interface; getters expose computed properties.
interface Describable {
  describe(): string;
}

class Temperature implements Describable {
  static readonly unit = "°C";

  constructor(private value: number) {}

  get celsius(): number {
    return this.value;
  }

  set celsius(nextValue: number) {
    this.value = nextValue;
  }

  describe(): string {
    return `${this.celsius}${Temperature.unit}`;
  }
}

const temperature = new Temperature(20);
temperature.celsius = 22;
console.log(temperature.describe());

export {};

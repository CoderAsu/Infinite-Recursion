// A call signature describes a callable object that may also have properties.
interface Formatter {
  prefix: string;
  (value: number): string;
}

const format: Formatter = Object.assign((value: number): string => String(value), {
  prefix: "Value: ",
});



// A construct signature describes a value that can be used with `new`.
interface Constructor<T> {
  new (value: string): T;
}

class Label {
  constructor(readonly value: string) {}
}

const LabelConstructor: Constructor<Label> = Label;
const label = new LabelConstructor("TypeScript");
console.log(format.prefix + format(42), label.value);

export {};

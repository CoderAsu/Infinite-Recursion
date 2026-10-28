// A class groups data and the methods allowed to change that data.
class Counter {
  private count = 0;

  increment(): void {
    this.count += 1;
  }

  current(): number {
    return this.count;
  }
}

const counter = new Counter();
counter.increment();
counter.increment();
console.log(counter.current());

export {};

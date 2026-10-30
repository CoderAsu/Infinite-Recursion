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













// An abstract class is a base class that cannot be instantiated directly. It can contain both implemented and unimplemented members.

// Rules of Abstract Class
/* 
  -> Abstract classes cannot create objects directly
  -> Abstract methods must be implemented by concrete subclasses
  -> Abstract classes can have normal methods with implementations
  -> Abstract classes can have constructors
  -> Abstract classes support access modifiers
  -> A class can extend only one class
  -> Abstract classes can implement interfaces
*/


// Rule 1:
abstract class Animal {
    name: string | undefined;

    constructor(name: string) {
        this.name = name;
    }
}

// Error
// const animal = new Animal();


// You must create an object of a concrete subclass instead.

class Dog extends Animal {}

const dog = new Dog("Tommy");






// Rule 2:

abstract class Animal2 {
    abstract eat(): void;
}

class Dog3 extends Animal {
    eat(): void {
        console.log("Dog is eating");
    }
}

// However, an abstract subclass can leave it unimplemented

abstract class Mammal extends Animal {
    // Can leave eat() unimplemented
}






// Rule 3:
abstract class Animal992 {
    abstract eat(): void;

    sleep(): void {
        console.log("Animal is sleeping");
    }
}

class Dog34 extends Animal992 {
    eat(): void {
        console.log("Dog is eating");
    }
}

const dog23 = new Dog34();

dog23.eat();
dog23.sleep();






// Rule 4:

abstract class Person56 {
    constructor(
        public name: string,
        public age: number
    ) {}
}

class Student extends Person56 {
    constructor(name: string, age: number) {
        super(name, age);
    }
}

const student = new Student("Asu", 22);










// Rule 5:

abstract class Employee72 {
    public name: string;
    protected salary: number;
    private id: number;

    constructor(name: string, salary: number, id: number) {
        this.name = name;
        this.salary = salary;
        this.id = id;
    }

    abstract calculateSalary(): number;
}







// Rule 6:

abstract class Parts {}
abstract class Machine {}

// Error: Cannot extend two classes
// class RobotDog extends Parts, Machine {}









// Rule 7:

interface Printable {
    print(): void;
}

abstract class Document89 implements Printable {
    abstract print(): void;

    save(): void {
        console.log("Document saved");
    }
}

class PDF extends Document89 {
    print(): void {
        console.log("Printing PDF");
    }
}
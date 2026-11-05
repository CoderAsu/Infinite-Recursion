// An interface tells TypeScript what properties and methods an object or class must have, and what their types should be.


// Rules of Interface
/*
    -> Interfaces cannot create objects
    -> Interfaces cannot contain method implementation
    -> Classes use implements to follow interfaces
    -> A class can implement multiple interfaces
    -> Interfaces can extend multiple interfaces
    -> Interfaces can have optional and readonly properties
    -> Interfaces support declaration merging
*/


/*
    Remember this simple rule:
        -> Interface + Interface = extends
        -> Class + Interface = implements
        -> Class + Class = extends
*/

// Rule 1:

interface Person2 {
    name: string;
    age: number;
}

// Error
// const person = new Person2();


// However, you can create an object using its type

const person: Person2 = {
    name: "Asu",
    age: 22
};







// Rule 2:

interface Animal {
    name: string | undefined;

    eat(): void; // Valid
}


/*
    interface Animal {
        eat(): void {
            console.log("Eating"); // Error
        }
    }
*/








// Rule 3:

interface Animal {
    name: string | undefined;
    eat(): void;
}

class Dog2 implements Animal {
    constructor(public name: string) {}

    eat(): void {
        console.log("Dog is eating");
    }
}








// Rule 4:

interface Flyable {
    fly(): void;
}

interface Swimmable {
    swim(): void;
}

class Duck implements Flyable, Swimmable {
    fly(): void {
        console.log("Flying");
    }

    swim(): void {
        console.log("Swimming");
    }
}







// Rule 5:

interface Person55 {
    name: string;
}

interface Employee55 {
    salary: number;
}

interface Manager extends Person55, Employee55 {
    department: string;
}

// the Manager interface contains three properties


const manager1: Manager = {
    name: "Subham",
    salary: 50000,
    department: "Development"
};








// Rule 6:

interface User78 {
    readonly id: number;
    name: string;
    email?: string;
}






// Rule 7:

interface User89 {
    name: string;
}

interface User89 {
    age: number;
}

const user5: User89 = {
    name: "Asu",
    age: 22
};
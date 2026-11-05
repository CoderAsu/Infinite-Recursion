// keyof produces a union of an object's property names.

type Student1000 = {
    name: string;
    age: number;
    course: string;
};

type StudentKey = keyof Student1000;
// "name" | "age" | "course"

let key: StudentKey = "name";
key = "course";

// key = "email"; // Error




// In a type position, typeof obtains the type of an existing variable or value.

const user = {
    name: "Asu",
    age: 22
};

type User = typeof user;

/*
    type User = {
        name: string,
        age: number
    }
*/



const usr1: User = {
    name: "Jinwoo",
    age: 23
};

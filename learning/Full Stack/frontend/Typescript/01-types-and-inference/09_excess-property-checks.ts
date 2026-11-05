interface Student {
  name: string;
  score: number;
}

// A fresh object literal is checked for unexpected properties.
// @ts-expect-error `favoriteColor` is not part of Student.
const directStudent: Student = { name: "Ada", score: 100, favoriteColor: "blue" };

// A previously created value can contain extra properties if it has the required shape.
const detailedStudent = { name: "Lin", score: 95, favoriteColor: "green" };
const student: Student = detailedStudent;

console.log(directStudent, student);

export {};

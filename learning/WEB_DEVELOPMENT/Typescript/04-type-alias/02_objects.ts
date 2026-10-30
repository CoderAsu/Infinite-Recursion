
// One of the most common uses of type is describing an object's structure.

type StudentDet = {
    name: string;
    age: number;
    course: string;
};

const student1: StudentDet = {
    name: "Asu",
    age: 22,
    course: "MCA"
};

const student2: StudentDet = {
    name: "Rahul",
    age: 23,
    course: "BCA"
};







// You can give a reusable name to an array and tuple type.

type Numbers = number[];

const marks: Numbers = [80, 90, 95];
const scores: Numbers = [70, 85, 92];


type Student45 = [string, number, boolean];

const stu1: Student45 = ["Asu", 22, true];
const stu2: Student45 = ["Rahul", 23, false];



// see this example
type Student100 = {
    name: string;
    age: number;
};

type StudentList = Student100[];

const students: StudentList = [
    { name: "Asu", age: 22 },
    { name: "Rahul", age: 23 }
];



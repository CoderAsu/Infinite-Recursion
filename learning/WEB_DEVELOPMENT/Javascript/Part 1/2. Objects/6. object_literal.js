
let name1 = "Jinwoo";
let name2 = "Asu";

let s = "song";

let n = "Fav";

let obj1 = {
    name1,
    FavName:name2,
    ["lname"]: "Sung",
    age: 24,
    [s]: "Only Mine",
    [n + " Movie"]: "Solo Leveling",
    greet: () => "Hello to all",
    message(){
        return "You got a new reward!";
    },
    'show details'(){
        return `I am ${this.name} ${this["lname"]}`
    }
}

console.log(obj1);


console.log(obj1.name1);
console.log(obj1.FavName);

console.log(obj1[s]);
console.log(obj1.song);

console.log(obj1["Fav Movie"]);

console.log(obj1.greet());
console.log(obj1['greet']());

console.log(obj1.message());

console.log(obj1["show details"]());

console.log();

























let yr = 2026, cs = "MCA";

function det(year, course){
    return {year, course};
}

console.log(det(yr, cs));




function det2(year, course){
    return [year, course];
}

console.log(det2(yr, cs));



let fname = "Virat", lname = " Kohli", age = 37;

function detail(fname, lname, age){
    let fullName = fname + lname;
    return {fullName, age};
}

console.log(detail(fname, lname, age));

let x = detail(fname, lname, age);
console.log(x.fullName);
console.log(x.age);


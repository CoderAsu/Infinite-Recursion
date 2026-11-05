// An Object is an unordered collection of properties.
// Properties can be changed, added, deleted, and some are read only.


let name1 = "Jinwoo";
let name2 = "Asu";

let about = "nationality";

let myId = Symbol("abc");

let s = "song";

let obj1 = {
    name1,
    myName: name2,
    ["fname"]: "Zenitsu",
    "lname": "Agatsuma",
    [about]: "Indian",
    ["Fav " + s]: "Naal Naal Ve",
    hobbies: ["cricket", "brains", "coding"],
    address: {
        street: "sector 1",
        state: "Odisha",
    },
    
    fullname: function() {
        return (this["fname"] + " " + this["lname"]);
    },

    greet(){
        return "Hello!";
    },

    'sayBye'(){
        console.log("GoodBye!\n");
    },

    eat: () => {
        console.log("Eating...");
    }
}

console.log(obj1.name1);
console.log(obj1["fname"]);
console.log(obj1.hobbies[1]);
console.log();

console.log(obj1.address["state"]);
console.log(obj1.address.street);
console.log();

console.log(obj1.fullname());
console.log(obj1["greet"]());
obj1.sayBye();
obj1["eat"]();
console.log();

console.log(obj1);

console.log();


























// deleting properties and methods


const JsUser = {
    nick_name: "Asu",
    "FullName": "Subham Padhy",
    age: "21",
    city: "Berhampur",
    nationality: "Indian",
    email: "asupadhy2003@gmail.com",
    isLoggedIn: true,
    lastLoginDays: ["Monday", "Saturday"],
    greet: () => "Hello"
};

console.log(JsUser.greet());

delete JsUser.age;
delete JsUser.greet;

console.log(JsUser);

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


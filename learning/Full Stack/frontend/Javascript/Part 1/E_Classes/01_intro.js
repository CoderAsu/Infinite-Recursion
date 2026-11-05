// A JavaScript class is not an object.
// It is a template for JavaScript Objects.

// The constructor method is called automatically when a new object is created.







// The Constructor Method
// The constructor method is a special method:
/* 
=> It has to have the exact name "constructor".
=> It is executed automatically when a new object is created.
=> It is used to initialize object properties.
*/


let a = class{
    constructor(word){
        this.word = word;
    }

    name = "Ben10";

    say(){
        console.log(this.word);  // prototype
    }

    greet(){
        console.log("Hello", this.name)
    }
}

let p1 = new a("hello");
p1.say();
p1.greet();









class User{
    constructor(username, email, password) {
        this.username = username;
        this.email = email;
        this.password = password;
        console.log("User created");
    }

    encryptPassword(){
        return `${this.password}abc`;
    }

    changeUserName(){
        return `${this.username.toUpperCase()}`;
    }
}

const chai = new User("Chai", "chai@gmail.com", "123");

console.log(chai.encryptPassword());
console.log(chai.changeUserName());


// Behind the scene

function user(username, email, password){
    this.username = username;
    this.email = email;
    this.password = password;
}

user.prototype.encryptPassword = function(){    
    return `${this.password}def`;
}

user.prototype.changeUserName = function(){
    return `${this.username.toUpperCase()}`;
}

const tea = new user("tea", "tea@gmail.com", "456");

console.log(tea.encryptPassword());
console.log(tea.changeUserName());
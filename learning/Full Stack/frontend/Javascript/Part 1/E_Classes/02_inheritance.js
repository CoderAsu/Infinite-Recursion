// Inheritance is passing down properties and methods from parent to child class.

/* 
    class Parent{

    }


    class Child extends Parent{

    }
*/

// If child and parent have same method, child's method will override parent's method.


class Parent{
    hello(){
        console.log("Hello from parent");
    }
}


class Child extends Parent{
    hello(){
        super.hello();
        console.log("Hello from child");
    }
}

let child = new Child();
child.hello();


















class Person {
    eat(){
        console.log("eat");
    }

    sleep(){
        console.log("sleep");
    }

    code(){
        console.log("code from person");
    }
}



class Engineer extends Person{
    code(){
        console.log("code from engineer");
    }
}

let engineer = new Engineer();
engineer.code();
engineer.eat();
engineer.sleep();























// super keyword is used to call parent's constructor and methods.


class User{
    constructor(username, email, password) {
        this.username = username;
        this.email = email;
        this.password = password;
    }

    logMe() {
        console.log(`Username is ${this.username}`);
    }

    UserDetails(){
        console.log(`User is ${this.username}`);
        console.log(`User email is ${this.email}`);
        console.log(`User password is ${this.password}`); 
    }
}


class Admin extends User{
    constructor(username, email, password, role){
        super(username, email, password);
        this.role = role;
    }

    logMe() {
        super.logMe();
        console.log(`Role is ${this.role}`);
    }

    adminDetails(){
        //super.UserDetails();
        console.log(`Admin user is ${this.username}`);
        console.log(`Admin email is ${this.email}`);
        console.log(`Admin password is ${this.password}`); 
    }
}

let student1 = new Admin("Asu", "asu@gmail.com", "3473874", "student");
student1.logMe();
student1.adminDetails();
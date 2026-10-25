// With call(), an object can use a method belonging to another object.


// we can't use this inside arrow function
const person = {
    fullName: function(){
        return this.firstName + " " + this.lastName;
    }
};

const person1 = {
    firstName: "John",
    lastName: "Doe"
};

const person2 = {
    firstName: "Jack",
    lastName: "Sparrow"
}

let call1 = person.fullName.call(person1);
let call2 = person.fullName.call(person2);

console.log(call1);
console.log(call2);



























// With the apply() method, you can write a method that can be used on different objects.

// The apply() method is similar to the call() method.

const student = {
    fullName: function() {
      return this.firstName + " " + this.lastName;
    }
  }
  
  const student1 = {
    firstName: "Mary",
    lastName: "Doe"
  }
  
  // This will return "Mary Doe":
  let apply1 = student.fullName.apply(student1);
  console.log(apply1);
  






// The call() method takes arguments separately.
// The apply() method takes arguments as an array.

const personInfo = {
    fullName: function(city, country) {
    return this.firstName + " " + this.lastName + ", " + city + ", " + country;
    }
};

const person3 = {
    firstName: "Stephen",
    lastName: "Strange"
};

let fullDetails1 = personInfo.fullName.call(person3, "Oslo", "Norway");
console.log(fullDetails1);

let fullDetails2 = personInfo.fullName.apply(person3, ["Oslo", "Norway"]);
console.log(fullDetails2);































// With the bind() method, an object can borrow a method from another object.


const person4 = {
    firstName:"John",
    lastName: "Doe",
    fullName: function () {
      return this.firstName + " " + this.lastName;
    }
  }
  
const member = {
    firstName:"Hege",
    lastName: "Nilsen",
}
  
let fullName = person4.fullName.bind(member);
console.log(fullName);

console.log(fullName());

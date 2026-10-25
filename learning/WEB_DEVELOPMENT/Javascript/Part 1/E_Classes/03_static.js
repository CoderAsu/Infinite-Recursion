// Static class methods are defined on the class itself.

// You cannot call a static method on an object, only on an object class.


class Car{
    constructor(name){
        this.name = name;
    }

    static hello(carName){
        return carName;
    }
}

const myCar = new Car("Ferrari");
// myCar.hello(); we can't call hello from object because we use static keyword.

console.log(Car.hello('Ferrari'));
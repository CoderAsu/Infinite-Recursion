# The word "polymorphism" means "many forms", and in programming it refers to methods/functions/operators with the same name that can be executed on many objects or classes.

# An example of Python function that can be used on different objects is the len() function.
"""
    For strings len() returns the number of characters.
    For tuples len() returns the number of items in the tuple.
    For dictionaries len() returns the number of key/pairs in the dictionary.
"""



# Class Polymorphism
# Polymorphism is often used in Class methods, where we can have multiple classes with the same method name.

# For example, say we have three classes: Car, Boat, and Plane, and they all have a method called move().

class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Drive!")

class Boat:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Sail!")

class Plane:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Fly!")

car1 = Car("Ford", "Mustang")
boat1 = Boat("Ibiza", "Touring 20")
plane1 = Plane("Boeing", "747")

for x in (car1, boat1, plane1):
    x.move()

print()



# Inheritance Class Polymorphism
# What about classes with child classes with the same name? Can we use polymorphism there?
# Yes. If we use the example above and make a parent class called Vehicle, and make Car, Boat, Plane child classes of Vehicle, the child classes inherits the Vehicle methods, but can override them.

class Vehicle:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Move!")

class Car1(Vehicle):
    pass

class Boat1(Vehicle):
    def move(self):
        print("Sail!")

class Plane1(Vehicle):
    def move(self):
        print("Fly!")


car2 = Car1("Ford", "Mustang")
boat2 = Boat1("Ibiza", "Touring 20")
plane2 = Plane1("Boeing", "747")

for x in (car2, boat2, plane2):
    print(x.brand)
    print(x.model)
    x.move()
    print()











# In polymorphism, we have two types of polymorphism: method overloading and method overriding.

# Method overloading is when we have multiple methods with the same name but different parameters. Python does not support method overloading, but we can achieve it by using default parameters.

class Area:
    def area(self, a=None, b=None):
        if a is not None and b is not None:
            return a * b
        elif a is not None:
            return a * a
        else:
            return 0

obj1 = Area()
print(obj1.area(5, 10)) # Rectangle area


# Method overriding is when we have a method in a child class with the same name as a method in the parent class. The child class method overrides the parent class method.
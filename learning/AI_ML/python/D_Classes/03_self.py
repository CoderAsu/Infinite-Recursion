# The self parameter is a reference to the current instance of the class.
# It is used to access properties and methods that belong to class.

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def greet(self):
        print("Hello, my name is " + self.name)

p = Person("Asu", 23)
p.greet()
print()


# Note: The self parameter must be the first parameter of any method in the class.
# Without self, Python would not know which objects properties you want to access.




# self does not have to be named "self".
class Car:
    def __init__(myarg, brand, model, year):
        myarg.brand = brand
        myarg.model = model
        myarg.year = year

    def display_info(myarg):
        print(f"{myarg.year} {myarg.brand} {myarg.model}") # here we are accessing the properties

car1 = Car("Toyota", "Corolla", 2020)
car1.display_info()
print()

# You can access any property of the class using self.





# You can also call other methods within the class using self.

class Person1:
    def __init__(self, name):
        self.name = name

    def greet(self):
        return "Hello, " + self.name

    def welcome(self):
        message = self.greet()
        print(message + "! Welcome to Python")

p1 = Person1("Asu")
p1.welcome()
# Inheritance allows us to define a class that inherits all the methods and properties from another class.

# Parent class is the class being inherited from, also called base class.
# Child class is the class that inherits from another class, also called derived class.


# Any class can be a parent class, so the syntax is the same as creating any other class.
class Person:
    def __init__(self, fname, lname):
        self.firstname = fname
        self.lastname = lname

    def printname(self):
        print(self.firstname, self.lastname)

x = Person("Subham", "Padhy")
x.printname()




# To create a class that inherits the functionality from another class, send the parent class as a parameter when creating the child class.
class Student1(Person):
    pass

y = Student1("Rajat", "Singh")
y.printname()








# Add the __init__() Function
"""
    So far we have created a child class that inherits the properties and methods from its parent.
    We want to add the __init__() function to the child class (instead of the pass keyword)

    When you add the __init__() function, the child class will no longer inherit the parent's __init__() function.
    Note: The child's __init__() function overrides the inheritance of the parent's __init__() function.

    To keep the inheritance of the parent's __init__() function, add a call to the parent's __init__() function.
    or
    Python also has a super() function that will make the child class inherit all the methods and properties from its parent.
"""

class Student2(Person):
    def __init__(self, fname, lname, age):
        Person.__init__(self, fname, lname)
        self.age = age

class Student3(Person):
    def __init__(self, fname, lname, year):
        super().__init__(fname, lname)
        self.graduationyear = year

    def welcome(self):
        print("Welcome", self.firstname, self.lastname, "to the class of", self.graduationyear)

# By using the super() function, you don't have to use the name of the parent element, it will automatically inherit the methods and properties from its parent.

z = Student3("Mike", "Olsen", 2023)
z.welcome()
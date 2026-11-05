# OOP stands for object-oriented programming.
# Python is an object-oriented langugage, allowing you to structure your code using classes and objects for better organization and reusability.

# Advantages of OOP
"""
    -> Provides a clear structure to program
    -> Makes code easier to maintain, reuse and debug.
    -> Helps keep your code DRY (Don't Repeat Yourself).
    -> Allows you to build reusable applications with less code.
"""

# The DRY principle means you should avoid writing the same code more than once. Move repeated code into functions on classes and reuse it.

# What are classes and objects?
# Classes and objects are the two core concepts in object oriented programming.
# A class defines what an object should look like, and an object is created based on that class.

"""
    Class       objects
    Fruit       Apple, banana, mango
    Car         Volvo, Audi, Toyota
"""

# When you create an object from a class it inherits all the variables and functions defined inside the class.



# Almost everything in Python is an object with its properties and methods.
# A class is like an object constructor, or a "blueprint" for creating objects.

# create a class

class MyClass:
    x = 5



# create a object

p1 = MyClass()
print(p1.x)
print()




# You can create multiple objects from the same class.

p2 = MyClass()
p3 = MyClass()
p4 = MyClass()

print(p2.x)
print(p3.x)
print(p4.x)

# Each object is independent and has its own copy of the class properties.




# delete object
del p4






# Class definitions can't be empty, but if for some reason you have a class definition with no content, put in the pass statement to avoid getting an error.

class Person:
    pass
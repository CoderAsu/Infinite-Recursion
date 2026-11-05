# All clases have a built-in method called __init__(), which is always executed when the class is being initiated.

# The __init__() method is used to assign values to object properties, or to perform operations that are necessary when the object is being executed.

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

p1 = Person("Asu", 23)
print(p1.name)
print(p1.age)
print()

# Note: The __init__() method is called automatically everytime the class is being and to create a new object.





# Without the __init__() method, you would need to set properties manually for each object.

class Person1:
    pass

p2 = Person1()
p2.name = "John"
p2.age = 25

print(p2.name)
print(p2.age)
print()



# You can also get default values for parameters in that __init__() method.

class Person2:
    def __init__(self, name, age = 23):
        self.name = name
        self.age = age

p3 = Person2("Emily")
p4 = Person2("Robin", 26)

print(p3.name, p3.age)
print(p4.name, p4.age)

print()


# The __init__() method can have as many parameters you need.



# adding a function inside a constructor
class Person3:
    def __init__(self, name, age):
        self.name = name
        self.age = age

        def greet(self):
            print(f"Hello, my name is {self.name} and I am {self.age} years old.")

        greet(self)

p5 = Person3("Asu", 23)

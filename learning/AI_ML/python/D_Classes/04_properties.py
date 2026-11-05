# Properties are variables that belong to a class. They store data for each object created from the class.

class Car:
        def __init__(self, brand, model):
            self.brand = brand
            self.model = model

car1 = Car("Toyota", "Corolla")
print(car1.brand)
print(car1.model)
print()

# You can access object properties using dot notation.


# You can modify the value of properties on objects.
car1.brand = "Ford"
print(car1.brand)
print()



# You can delete properties from objects using the del keyword.
del car1.model

car1.brand = "abhisek"
print(car1.brand)

car1.expiry = "23-12-2026"
print(car1.expiry)




# Class Properties vs Object Properties
# Properties defined inside __init__() belong to each object (instance properties).
# Properties defined outside methods belong to the class itself (class properties) and are shared by all objects.

class Person:
    species = "Human" # Class property
    country = "USA" # Class property

    def __init__(self, name):
        self.name = name # Instance property

p1 = Person("Virat Kohli")
p2 = Person("Rohit Sharma")

print(p1.name)
print(p2.name)
print(p1.species)
print(p2.species)
print()


# When you modify a class property, it affects all objects.
Person.country = "India"

print(p1.country)
print(p2.country)
print()

Person.role = "Cricketer"

print(p1.role)
print(p2.role)

# You can add properties to existing objects.
p1.age = 37

print(p1.age)
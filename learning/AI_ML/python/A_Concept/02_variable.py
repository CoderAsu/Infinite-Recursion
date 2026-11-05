# Variables are containers for storing data values.
# A variable is created the moment you first assign a value to it.
x = 5
y = "John"
print(x)
print(y)

x = "Asu"
print(x)

# Rules
# A variable name start with a letter or the underscore character but not start with a number.
# A variable name can only contain alphanumeric characters and underscores (A-z, 0-9, _ ).
# Variable names are case-sensitive (age, Age and AGE are three different variables).
# A variable name cannot be any of the Python keywords.


# There are several techniques you can use to make them more readable:
# Camel Case: Each word, except the first, starts with a capital letter.
myVariableName = "John"
# Pascal case: Each word start with a capital letter.
MyVariableName = "Ram"
# Snake case: Each word is separated by an underscore character.
my_variable_name = "Shyam"



# Python allows you to assign values to multiple variable in one line:
x, y, z = "Orange", "Apple", "Banana"
print(x)
print(y)
print(z)
# Note: Make sure the number of variables matches the number of values, or else you will get error.

# You can assign the same value to multiple variable in one line:
a = b = c = "Apple"
print(a)
print(b)
print(c)

# Unpacking: If you have a collection of values in a list, tuple etc. Python allows you to extract the values into variables. 
vehicle = ["car", "bus", "truck"]
f, g, h = vehicle
print(f)
print(g)
print(h)
print()
print()


# Concept of object references and memory management in Python:

x = 5
y = x # shared reference to the same object in memory
print(x)

x = 10
print(x)
print(y)
print()



# deleting a variable

value = 3434
del value
# print(value) # this will give an error because the variable has been deleted.



# Swapping two variables

a, b = 5, 10
a, b = b, a

print(a, b)
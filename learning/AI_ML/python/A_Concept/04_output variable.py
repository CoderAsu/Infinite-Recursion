# The Python print() function is often used to output variables.
name = "Python is awesome"
print(name)
print()

# In the print() function, you output multiple variables, separated by a comma.
x = "python"
y = "is"
z = "best"
w = "programming language"
print(x, y, z, w)
print()

# You can also use the + operator to output multiple variables.
x = "python"
y = "is"
z = "best"
w = "programming language"
print(x + y + z + w)
print()

# Notice the space character after "python" and "is", without them the result would be "pythonisbestprogramming language".

# In print() function, when you try to combine a string and a number with the + operator, Python will give you an error.
# x = 5
# y = "John"
# print(x + y)

# The best way to output variable with string is to use of (,).
x = 8
y = "John"
print(x, y)

print(x * f" {y}")
print()


# By default, the print() function ends with a new line.
# If you want to print multiple words on the same line, you can use the end parameter:

print("Hello World!", end=" ")
print("I will print on the same line.")
print()



# we can also use sys.stdout.write() to print on the same line.

import sys

sys.stdout.write("Hello User, ")
sys.stdout.write("Python is very easy to learn.")  
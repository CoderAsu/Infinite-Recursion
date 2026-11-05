# There are three numeric types in Python:
"""
1. int
2. float
3. complex
"""

# Variables of numeric types are created when you assign a value to them. To verify the type of any object in Python, use type() function.
x = 1       # int
y = 2.8     # float
z = 4j      # complex
print(type(x))
print(type(y))
print(type(z))

# 1. int:- Int or integer, is a whole number, positive or negative, without decimals, of unlimited length.
x = 1
y = 834778669798798
z = -3847887
print(type(x))
print(type(y))
print(type(z))

# 2. float:- Float, or “floating point number” is a number, positive or negative, containing one or more decimals. 
# Float can also be scientific numbers with an “e” to indicate the power of 10.
x = 1.10
y = - 34.e54
z = -87.7e100
w = 798e79
print(type(x))
print(type(y))
print(type(z))
print(type(w))

# 3. complex:- Complex number are written with a “j” as the imaginary part.
x = 3 + 5j
y = 4j
z = -2j
print(type(x))
print(type(y))
print(type(z))



# You can convert from one type to another with the int(), float(), and complex() methods.
x = 1    # int
y = 2.8  # float
z = 3j   # complex
# Convert from int to float:
a = float(x)
# Convert from float to int:
b = int(y)
# Convert from int to complex:
c = complex(x)
# Convert from float to complex:
d = complex(y)
print(a)
print(b)
print(c)
print(d)
# Note: You cannot convert complex into another number type.
print()
print()



# Also str of integer is converted into int, float and complex also str float is converted into float and complex.

string1 = "23"
convert1 = int(string1)
print(convert1)

convert2 = float(string1)
print(convert2)

convert3 = complex(string1)
print(convert3)


string2 = "45.67"

convert4 = float(string2)
print(convert4)

convert5 = complex(string2)
print(convert5)

print()
print()



# Python does not have a random() function to make a random number, 
# but Python has a built-in module called random that can be used to make random numbers.
import random
print(random.randrange(1, 10))
print()
























# Type Conversion
"""
Type conversion refers to the change in datatype of a variable. Whenever a data type of a variable is changed after declaration it is known as type conversion. Python supports two types of type conversion i.e implicit type conversion and explicit type conversion.

Implicit Type Conversion
Implicit type conversion refers to the process of change in the data type of a variable at runtime to avoid data loss.

Explicit Type Conversion (type casting)
Explicit type conversion refers to the change in the data type of a variable done manually using the built in data type functions such as int(), float(), str(), list(), tuple(), set(), dict(), etc.

There may be times when you want to specify a type on to a variable. 
This can be done with casting. Python is an object-oriented language, and as such it uses classes to define data types, including its primitive types. 
Casting in python is therefore done using constructor functions.
"""

# Implicit Type conversion

a = 2
b = 2.5
res = a + b

print(res)
print(type(res))



# Explicit type conversion

# 1. int(): constructs an integer number from an integer literal, a float literal (by removing all decimals), 
# or a string literal (providing the string represents a whole number).
x = int(1)	    # x will be 1
y = int(2.8) 	# y will be 2
z = int("3")    # z will be 3
print(x, y, z)


# 2. float(): constructs a float number from an integer literal, a float literal or a string literal (providing the string represents a float or an integer).
p = float(1)		# x will be 1.0
q = float(2.8)		# y will be 2.8
r = float("3.0")    # z will be 3.0
s = float("4.2")    # w will be 4.2
print(p, q, r, s)


# 3. str(): constructs a string from a wide variety of data types, including strings, integer literals and float literals.
a = str("John")	    # x will be ‘John’
b = str(2)		    # y will be ‘2’
c = str(3.0)		# z will be ‘3.0’
print(a, b, c)
print(type(b))

l = [9, "bus", "truck"]
t = ("apple", "banana", "orange")
s = {"potato", "tomato", "brinjal"}
y = tuple(l)
z = set(l)
w = list(t)
u = set(t)
v = list(s)
q = tuple(s)
print(y)
print(z)
print(w)
print(u)
print(v)
print(q)
list1 = [l, t, s]
print(list1)
target = list1[0][2]
print(target)
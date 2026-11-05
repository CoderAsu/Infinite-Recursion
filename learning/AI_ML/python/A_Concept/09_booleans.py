# Booleans represent one of the two values: True or False.
# In programming, you often need to know if an expression is True or False.
# You can evaluate any expression in Python, and get one of two answers, True or False.
# When you compare two values, the expression is evaluated and Python returns the Boolean answer:
print(10 > 9)
print(10 == 9)
x = 10
print(10 == x)
print(10 < 9)

# When you run a condition in an if statement, Python returns True or False:
a = 200
b = 33
if b > a:
    print("b is greater than a")
else:
    print("b is not greater than a")

# The bool() function allows you to evaluate any value, and give you True or False in return.
print(bool("Hello"))
print(bool(15))
print(bool(None))

# Most Values are True
# Almost any value is evaluated to True if it has some sort of content.
# Any string is True, except empty strings.
# Any number is True, except 0.
# Any list, tuple, set and dictionary are True, except empty ones.
print(bool("abc"))
print(bool(" ")) #here whitespace is present
print(bool(1))
print(bool([2, 3, 5, 5]))

# Some Values are False
# In fact, there are not many values that evaluate to False, except empty values, such as (), [], {}, "", the number '0', and the value 'None'.
# And of course the value False evaluate to False.
print(bool(""))
print(bool(()))
print(bool([]))
print(bool({}))
print(bool(0))
print(bool(None))


# One more value, or object in this case, evaluates to False, and 
# that is if you have an object that is made from a class with a __len__ function that returns 0 or False.
class Name:
    def __len__(self):
        return 0


myobj = Name
print(bool(myobj))


# Functions can Return a Boolean
# You can create functions that returns a Boolean Value:
def myfunc():
    return True


print(myfunc())


# You can execute code based on the Boolean answer of a function:
def myfunc():
    return True


if myfunc():
    print("Yes")
else:
    print("No")

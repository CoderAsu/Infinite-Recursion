# A function is a block of code which only runs when it is called.
# You can pass data, known as parameters, into a function.
# A function can return data as a result.

# Types of functions:
# 1. Built-in-functions (library functions): The functions which are coming with Python software automatically are called built-in-functions.
# 2. User defined functions: The functions which are developed by programmers explicitly according to business requirement are called user defined functions.


# Creating a Function
# In Python a function is defined using the def keyword:
def my_function():
    print("Hello from a function")

# Calling a Function
# To call a function, use the function name followed by parenthesis:
my_function()


# Arguments
# Information can be passed into functions as arguments.
# Arguments are specified after the function name, inside the parentheses.
# You can add as many arguments as you want, just separate them with a comma.
def my_func(fname):
    print(fname, "Asu")

my_func("Hi")
my_func("Hello")
my_func("Bye")
# Arguments are often shortened to args in Python documentations.


# Parameters or Arguments?
# The terms parameter and argument can be used for the same thing: information that are passed into a function.

# From a function's perspective:
# A parameter is the variable listed inside the parenthesis in the function definition.
# An argument is the value that is sent to the function when it is called.


# Return Values
# Functions can send data back to the code that called them using the return statement. 
# When a function reaches a return statement, it stops executing and sends the result back.

def get_greeting():
    return "Hello from a function"

message = get_greeting()
print(message)

# If a function doesn't have a return statement, it returns None by default.



# Returning Multiple Values
def calculator(a, b):
    sum = a + b
    diff = a - b
    mul = a * b
    div = a / b
    return sum, diff, mul, div

result = calculator(10, 5)
print(result)

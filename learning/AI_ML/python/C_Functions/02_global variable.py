# Variables that are created outside of a function are known as global variables.
# Global variables can be used by everyone, both inside of a functions and outside.

# Create a variable outside of a function, and use it inside the function
x = "awesome"
def myfunc():
    print("Python is" + " " + x)
myfunc()
print()


'''
If you create a variable with the same name inside a function, this variable will be local, and can only be used inside the function.
The global variable with the same name will remain as it was, global and with the original value.'''
# Create a variable inside a function, with the same name as the global variable.
y = "awesome"
def myfunc():
    y = "fantastic"
    print("Python is" + " " + y)
myfunc()
print("Python is" + " " + y)
print()


# The global keyword
# Normally, when you create a variable inside a function, that variable is local, and can only be used inside that function.


# To create a global variable inside a function, you can use the global keyword.
# If you use the global keyword, the variable belongs to the global scope:
def myfunc():
    global x
    x = "fantastic"
myfunc()
print("python is" + " " + x)
print()


# Also, use the global keyword if you want to change a global variable inside a function.
# To change the value of a global variable inside a function, refer to the variable by using the global keyword:
x = "awesome"
def myfunc():
    global x
    x = "best"
myfunc()
print("python is" + " " + x)   


def myf():
    global u 
    u = 9
    print("My favourite no is", u)

myf()
print(f"The no you are searching is {u}.")
print()



# Nonlocal Keyword
# The nonlocal keyword is used to work with variables inside nested functions.
# The nonlocal keyword makes the variable belong to the outer function.

def myfunc1():
    x = "Jane"
    
    def myfunc2():
        x = "hello"

        def myfunc3():
            nonlocal x
            x = "Welcome"

        myfunc3()
        return print(x)

    myfunc2()
    return x

print(myfunc1())
print()






# The LEGB Rule
# Python follows the LEGB rule looking up variable names, and searches for them in this order:
"""
    1. Local: Inside the current function
    2. Enclosing: Inside enclosing functions (from inner to outer)
    3. Global: At the top level of the module
    4. Built-in: In Python's built-in namespace
"""

var = "global"

def outer():
    var = "enclosing"

    def inner():
        var = "local"
        print("Inner: ", var)
    inner()
    print("Outer: ", var)

outer()
print("Global: ", var)
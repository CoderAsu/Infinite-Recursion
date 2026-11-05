# A decorator is a function that takes another function as input and returns a new function.

def changecase(func):
    def myinner():
        return func().upper()
    return myinner

@changecase
def myfunction():
    return "Hello Asu"

print(myfunction())



# We can also use another method

capital = changecase(myfunction)
print(capital())





# A decorator can be called multiple times. As the code of the function written above we can call another function.

@changecase
def otherfunction():
    return "I am Speed!"

print(otherfunction())




# Arguments in the decorated function
# Functions that requires arguments can also be decorated, just make sure you pass the arguements to the wrapper function.

def changecase1(func):
    def myinner(x):
        return func(x).upper()
    return myinner

@changecase1
def myfunction2(name):
    return "Welcome " + name

print(myfunction2("John"))

# We can also use *args and **kwargs.





# Decoration with Arguments
# Decorators can accept their own arguments by adding another wrapper level.

def changecase2(n):
    def changecase2(func):
        def myinner():
            if n == 1:
                a = func().lower()
            else:
                a = func().upper()
            return a
        return myinner
    return changecase2

@changecase2(1)
def myfunction3():
    return "Python is best"

print(myfunction3())
print()
print()


# Alternative method

decorator = changecase2(2)
case = decorator(myfunction3)

print(case())

print()
print()











# Multiple Decorators
# You can use multiple decorators on one function. This is done by placing the decorator calls on top of each other.
# Decorators are called in the reversed order, starting with the one closest to the function.

def changecase3(func):
    def myinner():
        return func().upper()
    return myinner

def addgreeting(func):
    def myinner():
        return "Hello " + func() + ", " + "Have a good day"
    return myinner

@changecase
@addgreeting
def myfunction4():
    return "Asu"

print(myfunction4())


# Alternative method to call

def myfunc():
    return "Tommy"

result = changecase3(addgreeting(myfunc))
print(result())

print()
print()
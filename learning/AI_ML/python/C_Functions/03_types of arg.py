# Types of parameters or Formal Arguments:
# 1. Postional arguments or required arguments
# 2. Keyword arguments
# 3. Default parameters
# 4. Variable-length arguments


# 1. postional arguments
# By default, a function must be called with the correct number of arguments.
# Meaning that if your function expects 2 arguments, you have to call the function with 2 arguments, not more, and not less.
def myfunc(fname, lname):
    print(fname + " " + lname)

myfunc("Subham", "Padhy")
# If you try to call the function with 1 or 3 arguments, you will get an error.


def greet(name, dept):
    print(f"Hi, {name}")
    print(f"Are you from {dept} department?")

greet("Asu", "CS")
print()
# here if we change the position then the output we will get is weird.









# 2. keyword arguments
# You can also send arguments with the key = value syntax.
# This way the order of the arguments does not matter.
def children(child2, child3, child1):
    print("The youngest child is", child3 + ".")

children(child1="Asu", child2="Ayush", child3="Rohan")



def greet(name, dept):
    print(f"Hi, {name}")
    print(f"Are you from {dept} department?")

greet(name = "Asu", dept ="CS")
greet(dept = "HR", name= "Raj")
greet("Ayush", dept = 'science')
print()
# here if we change the order it will not affect the args.
# we can also use positional arg but it should be in order otherwise it will give an error.






# 3. Default parameters
# If we call the function without argument, it uses the default value:
def cont(country="Norway"):
    print("I am from", country)

cont("India")
cont("England")
cont()
cont("France")



def greet(name , subject , dept = ""):
    print(f"Hi, {name}")
    print(f"Do you teach {subject}?")
    print(f"Are you from {dept} department?")

greet("Asu", "Python", dept ="IT")
greet("Ayush", subject= "science", dept= "Physics")
greet("Raj", "Maths")
print()
# positional arguments can't appear after keyword argument.





# 4. Arbitrary Arguments, *args
# If you do not know how many arguments that will be passed into your function, add a '*' before the parameter name in the function definition.
# This way the function will receive a tuple of arguments, and can access the items accordingly:
def function(*kids):
    print("The youngest child is", kids[2] + ".")

function("Asu", "Ram", "Shyam")
# Arbitrary Arguments are often shortened to *args in Python documentations.



def add(*numbers):
    c = 0
    for i in numbers:
        c += i
    print(f'Sum is {c}')

add(5, 5, 7)
print()




# Arbitrary Keyword Arguments, **Kwargs
# If you do not know how many keyword arguments that will be passed into your function, add two asterisk: ** before the parameter name in the function definition.
def children1(**kid):
    print("His last name is", kid['lname'] + ".")

children1(fname ="Subham", lname="Padhy")
print()
# Arbitrary Kword Arguments are often shortened to **kwargs in Python documentations.





# Passing a List as an Argument
# You can send any data types of argument to a function(string, number, list, dictionary etc.), and it will be treated as the same data type inside the function.
def my_food(food):
    for x in food:
        print(x)

fruits = ["apple", "banana", "cherry"]

my_food(fruits)
print()






# Return Values
# To let a function return a value, use the return statement:
def no(x):
    return 5 * x

print(no(3))
print(no(100))
print(no(1))

def process(x, y, z, a):
    return x + y - z * a

var = process(1, 2, 3, 4)
print(var)
print()





def add(a, b):
    c = a + b
    return c

x = int(input("Enter 1st no:"))
y = int(input("Enter 2nd no:"))

z = add(x, y)
print("Addition:", z)
print()




# The pass Statement
# function definitions cannot be empty, but if you for some reason have a function definition with no content,
# put in the pass statement to avoid getting an error.
def my__func():
    pass















# Positional-Only Arguments
# You can specify that a function can have ONLY positional arguments, or ONLY keyword arguments.
# To specify that a function can have only positional argument, add ", /" after the arguments.
def my_fn(x, /):
    print(x)

my_fn(3)

# Without the ", /" you are actually allowed to use keyword arguments even if the function expects positional arguments:
def my_fn(x):
    print(x)

my_fn(x=3)

# But when adding the ", /" you will get an error if you try to send a keyword argument:
# def my_function(x, /):
#   print(x)

# my_function(x = 3)




# Keyword-Only Arguments
# To specify that a function can have only keyword arguments, add *, before the arguments:
def my_funct(*, x):
    print(x)

my_funct(x = 3)


# Without the *, you are allowed to use positional arguments even if the function excepts keyword arguments:
def my_function1(x):
    print(x)

my_function1(x)


# But when adding the *, you will get an error if you try to send a positional argument:
# def my_function(*, x):
#   print(x)

# my_function(3)





# Combine Positional-only and Keyword-Only
# You can combine the two argument types in the same function.
# Any argument before /, are postional-only, and any argument after the *, are keyword-only.
def my_fu(a, b, /, *, c, d):
    print(a + b + c + d)

my_fu(5, 6, c = 7, d = 8)
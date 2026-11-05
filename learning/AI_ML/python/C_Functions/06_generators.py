# Generators are functions that can pause and resume their execution. 
# When a generator function is called, it returns a generator object, which is an iterator.

# The code inside the function is not executed yet, it is only compiled. The function only executes when you iterate over the generator.

def my_generator():
    yield 1
    yield 2
    yield 3

for value in my_generator():
    print(value)

print()


# Generators allow you to iterate over data without storing the entire dataset in memory. Instead of using return, generators use the yield keyword.


# The yield keyword
# The yield keyword is what makes a function a generator. When yield is encountered, the function's state is saved, and the value is returned. The next time the generator is called, it continues from where it left off.

def count_up_to(n):
    count = 1
    while count <= n:
        yield count
        count += 1
    
for num in count_up_to(5):
    print(num)

print()

# Unlike return, which terminates the function, yield pauses it and can be called multiple times.




# Generators Saves Memory
# Generators are memory-efficient because they generate values on-the-fly instead of storing everything in memory.
# For large datasets, generators save memory.


# Diff bet iter() and yield
# In Python, iter() and yield are both related to iteration, but they serve very different purpose.
"""
    iter() converts an iterable into an iterator.

    Iterable -> something you can loop over (list, tuple, string, set)
    Iterator -> object that gives values one by one using next()

    yield is used inside a function to produce values one at a time, instead of returning all at once.
    A function with yield becomes a generator.
"""

def large_sequence(n):
    for i in range(n):
        yield i

# this doesn't create a million numbers in memory
gen = large_sequence(1000000)
print(next(gen))
print(next(gen))
print(next(gen))
print()




# yield vs return
# return -> send value and end the function
# yield -> send value and pause the function

# example with return
def test1():
    print("A")
    return 10
    print("B") # never runs

print(test1())
print()


# example with yield
def test2():
    print("A")
    yield 10
    print("B")
    yield 20
    print("C")
    yield 30

g = test2()
print(next(g))
print(next(g))





# Generator Expressions
# Similar to list comprehensions, you can create generators using generator expressions with parentheses instead of square brackets.

# List comprehension -> creates a list
list_comp = [x * x for x in range(5)]
print(list_comp)
print()

# Generator expression -> creates a generator
gen_exp = (x * x for x in range(5))
print(gen_exp)
print(list(gen_exp))
print()


# Using a generator expression with sum:
total = sum(x * x for x in range(10))
print(total)












# Generators can be used to create the Fibonacci sequence.
# It can continue generating values indefinitely, without running out of memory.

def fibonacci():
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a + b

# Get first 20 fibonacci numbers
gen = fibonacci()
for _ in range(20):
    print(next(gen))

print()





# Generator Methods
# Generators have special methods for advanced control:

# send() method
# The send() method allows you to send a value to the generator:

def echo_generator():
    while True:
        received = yield
        print("Received:", received)

gen = echo_generator()
next(gen)
gen.send("Hello")
gen.send("World")




# close() method
# The close() method stops the generator:

def my_gen():
    try:
        yield 1
        yield 2
        yield 3
    finally:
        print("Generator closed")

gen = my_gen()
print(next(gen))
print(next(gen))
gen.close()
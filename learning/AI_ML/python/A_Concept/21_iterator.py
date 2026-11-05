# An iterator is an object that can be iterated upon, meaning that you can traverse through all the values.
# Technically, in Python, an iterator is an object which implements the iterator protocol, which consist of the methods __iter__() and __next__().

# Iterable vs Iterator
# An iterable is something you can loop over.
# Examples: List, tuple, string, set, dictionary

# An iterator is an object that gives one item at a time using next().

"""
    Iterable                Iterator
    Has many items          Gives items one by one
    Can be looped           Used to fetch next value
    Uses __iter__()         Uses __next__()
    Example: list           Exa
    mple: iter(list)
"""


mytuple = ("Apple", "Banana", "Cherry")
myit = iter(mytuple)

print(next(myit))
print(next(myit))
print(next(myit))
print()


my_list = [1, 2, 3, 4]
iterator = iter(my_list)

try:
    while True:
        print(next(iterator))
except StopIteration:
    print("There is no more value to iterate")

print()





# Create an Iterator
class myNumbers:
    def __iter__(self):
        self.a = 1
        return self
    
    def __next__(self):
        x = self.a
        self.a += 1
        return x

myclass = myNumbers()
myiter = iter(myclass)

print(next(myiter))
print(next(myiter))
print(next(myiter))
print(next(myiter))
print(next(myiter))
print(next(myiter))

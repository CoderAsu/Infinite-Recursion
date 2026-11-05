# Python has two built-in methods that you can use on tuples.
'''
Method	    Description
count()	    Returns the number of times a specified value occurs in a tuple
index()	    Searches the tuple for a specified value and returns the position of where it was found
'''

# 1. count()
thistuple: tuple[int] = (1, 3, 5, 8, 7, 5, 4, 6, 8, 5)
x = thistuple.count(5)
print(x)

# 2. index()
color: tuple[str] = ('red', 'blue', 'green', 'orange')
y = color.index("blue")
print(y)

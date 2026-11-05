# Tuples are used to store multiple items in a single variable.
# A tuple is a collection which is ordered and unchangeable.
# Tuples are written with round brackets.
thistuple = ('apple', 'banana', 'cherry')
print(thistuple)

# Tuple Items
# Tuple items are ordered, unchangeable and allow duplicate values.
# Tuple items are indexed, the first item has index [0], the second item has index [1] etc.

# Ordered
# Ordered in tuples means the items have a defined order, and that order will not change.

# Unchangeable
# Tuples are unchangeable, meaning that we cannot change, add or remove items after the tuple has been created.

# Allow Duplicates
# Since tuples are indexed, they can have items with the same value:
thistuple1 = ('apple', 'banana', 'cherry', 'apple', 'cherry')
print(thistuple1)

# Tuple Length
# To determine how many items a tuple has, use the len() function:
print(len(thistuple1))


# Create Tuple With One Item
# To create a tuple with only one item, you have to add a comma after the item, otherwise Python will not recognize it as a tuple.
x = ('apple')
print(type(x))
y = ('cherry',)
print(type(y))

# Tuple Items- Data Types
# Tuple items can be of any data type:
tuple1 = ('apple', 'banana', 'cherry')
tuple2 = (1, 5, 7, 3, 5)
tuple3 = (True, False, False)

# A tuple can contain different data types:
tuple4 = ('abc', 3, True, 'male', 50)

# The tuple() Constructor
# It is also possible to use the tuple() constructor to make a tuple.
tuple5 = tuple(('car', 'bus', 'truck'))
print(tuple5)

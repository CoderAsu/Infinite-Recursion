# Sets are used to store multiple items in a single variable.
# A set is a collection which is unordered, unchangeable, and unindexed.
# Note: Set items are unchangeable, but you can remove and add new items.
# Sets are written with curly brackets.
thisset = {"apple", "banana", "cherry"}
print(thisset)

# Note: Sets are unordered, so you can't be sure in which order the items will appear.

# Set Items
# Set items are unordered, unchangeable, and do not allow duplicate values.

# Unordered
# It means that the items in a set do not have a defined order.
# Set items can appear in a different order every time you use them, and cannot be referred to by index or key.

# Unchangeable
# Set items are unchangeable, meaning that we cannot change the items after the set has been created.
# Once a set is created, you cannot change its items, but you can remove items and add new items.

# Duplicates Not Allowed
# Sets cannot have two items with the same value.
# Duplicate values will be ignored:
thisset = {"apple", "banana", "cherry", "apple"}
print(thisset)

# Note: The values (True and 1) and (False and 0) are considered the same value in sets, and are treated as duplicates:
thisset1 = {"apple", "banana", "cherry", True, 1, 2}
print(thisset1)

thisset2 = {"apple", "banana", "cherry", False, True, 0}
print(thisset2)

# To determine how many items a set has, use the len() function.
print(len(thisset1))

# Set items can be of any data type:
set1 = {"apple", "banana", "cherry"}
set2 = {1, 5, 7, 9, 3}
set3 = {True, False, False}
print(type(set1))
print(type(set2))
print(type(set3))

# A set can contain different data types:
set4 = {"abc", 34, True, 40, "male"}
print(type(set4))

# The Set constructor
# It is also possible to use the set() constructor to make a set.
thisset3 = set(("apple", "strawberry", "cherry"))  # note the double round-brackets
print(thisset3)








# Frozenset
# A frozenset is an immutable version of a set. Like a normal set, it stores unique, unordered elements.
# Unlike a set, once created, you cannot add, remove, or modify elements in a frozenset. But still supports set operations.

fs = frozenset({1, 3, 5, 6, 1})
print(fs)

fs2 = frozenset([3, 4, 5])
print(fs.union(fs2))
print(fs.intersection(fs2))

# constructor
fs3 = frozenset(("apple", "banana", "cherry"))
print(fs3)
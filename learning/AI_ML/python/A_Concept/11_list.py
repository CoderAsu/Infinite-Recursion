# List are used to store multiple items in as single variable.
# List are created using square brackets:
thislist = ["apple", "banana", "cherry"]
print(thislist)

# List items are ordered, changeable, and allow duplicate values.
# List items are indexed, the first item has index [0], the second item has index [1] etc.

# Ordered 
# When we say that lists are ordered, it means that the items have a defined order, and that order will not change.
# If you add new items to a list, the new items will be placed at the end of the list.

# Changeable
# The list is changeable, meaning that we can change, add, and remove items in a list after it has been created.

# Allow Duplicates
# Since lists are indexed, lists can have items with the same value:
x = ["apple", "banana", "cherry", "apple", "cherry"]
print(x)

# To determine how many items a list has, use the len() function:
print(len(x))

# List items can be of any data type:
list1 = ["apple", "banana", "cherry"]
list2 = [1, 5, 7, 9, 3]
list3 = [True, False, False]
print(list1)
print(list2)
print(list3)

# A list can contain different data types:
list4 = ["abc", 34, True, 40, "male"]
print(list4)

# From Python's perspective, lists are defined as objects with the data type 'list':
print(type(list4))

# It is also possible to use the list() constructor when creating a new list.
list5 = list(("apple", "banana", "cherry"))  # note the double round-brackets
print(list5)

list6 = [45, 87, 98, [9, 4, 6], 21]
print(list6[3][1])






# Note: Python does not have built-in support for Arrays, but Python Lists can be used instead.
# Arrays are used to store multiple values in one single variable and must be of same data types.
# Create an array containing car names:
cars = ["Ford", "Volvo", "BMW"]

# Array Methods are also same as list methods.
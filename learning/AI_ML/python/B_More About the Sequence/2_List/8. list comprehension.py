# List comprehension offers a shorter syntax when you want to create a new list based on the values of an existing list. 

# Example: Based on a list of fruits, you want a new list, containing only the fruits with the letter "a" in the name.

# syntax
# newlist = [expression for item in iterable if condition == True]
# The return value is a new list, leaving the old list unchanged.

fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

newlist1 = [x for x in fruits if "a" in x]
print(newlist1)



# The condition is like a filter that only accepts the items that evaluate to True.

# The condition if x != "apple"  will return True for all elements other than "apple", making the new list contain all fruits except "apple".

newlist2 = [x for x in fruits if x != "apple"]
print(newlist2)


# The condition is optional and can be omitted.

newlist3 = [x for x in fruits]
print(newlist3)








# The iterable can be any iterable object, like a list, tuple, set etc.

newlist4 = [x for x in range(10)]
print(newlist4)







# The expression is the current item in the iteration, but it is also the outcome, which you can manipulate before it ends up like a list item in the new list.

newlist5 = [x.upper() for x in fruits]
print(newlist5)


# The expression can also contain conditions, not like a filter, but as a way to manipulate the outcome.

newlist6 = [x if x != "banana" else "orange" for x in fruits]
print(newlist6)
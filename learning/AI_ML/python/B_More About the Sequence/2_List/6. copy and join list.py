# Copy a list
# You cannot copy a list simply by typing list2 = list1, because: list 2 will only be a reference to list1, and changes made in list 1
# will automatically also be made in list 2.
# There are ways to make a copy, one way is to use the built-in List method copy():
fruits = ['apple', 'banana', 'cherry']
mylist = fruits.copy()
print(mylist)

# Another way to make a copy is to use the built-in method list()
fruits1 = list(fruits)
print(fruits1)


# Join Two Lists
# There are several ways to join, or concatenate, two or more lists in Python.
# One of the easiest ways is by using the + operator.
list1 = ['a', 'b', 'c']
list2 = [1, 2, 3]
list3 = list1 + list2
print(list3)

# Another way to join two lists is by appending all the items from list 2 into list 1, one by one:
list4 = ['d', 'e', 'f']
list5 = [4, 5, 6]
for x in list5:
    list4.append(x)
print(list4)

# or you can use the extend() method, where the purpose is to add elements from one list to another list:
list6 = ['g', 'h', 'i']
list7 = [7, 8, 9]
list6.extend(list7)
print(list6)


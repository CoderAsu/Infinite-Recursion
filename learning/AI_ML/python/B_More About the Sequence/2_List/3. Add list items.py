# Append Items
# To add an item to the end of the list, use the append() method:
thislist = ['apple', 'banana', 'cherry', 'orange']
thislist.append("Watermelon")
print(thislist)

# Insert Items
# To insert a list item at a specified index, use the insert() method.
# The insert() method inserts an item at the specified index:
vehicles = ['bus', 'truck', 'car']
vehicles.insert(1, 'cycle')
print(vehicles)

# Extend List
# To append elements from another list to the current list, use the extend() method.
tropical = ['mango', 'pineapple', 'papaya']
thislist.extend(tropical)
print(thislist)
# The elements will be added to the end of the list.

# Add any Iterable
# The extend() method does not have to append lists, you can add any iterable object (tuples, set, dictionaries etc.)
thistuple = ('kiwi', 'grapes')
thislist.extend(thistuple)
print(thislist)

thisset = {1, 2, 3, 4, 2}
thislist.extend(thisset)
print(thislist)

thisdict = dict(name = "Asu", age = 22)
thislist.extend(thisdict)
print(thislist)

# difference between append and extend
num = [10, 5, 84, 32, 41]
num.extend([[65, 89, 98, 2],[1, 2, 3]])
print(num)
num1 = [10, 5, 84, 32, 41]
num1.extend([65, 89, 98, 2])
print(num1)
num1.append([72, 55, 39, 7])
print(num1)


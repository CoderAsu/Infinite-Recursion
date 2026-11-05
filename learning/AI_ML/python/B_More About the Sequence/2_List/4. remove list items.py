# Remove Specified Item
# The remove() method specified item.
thislist = ['apple', 'banana', 'cherry']
thislist.remove('banana')
print(thislist)

# If there are more than one item with the specified value, the remove() method removes the first occurance:
thislist1 = ['apple', 'banana', 'watermelon', 'guava', 'strawberry', 'watermelon']
thislist1.remove('watermelon')
print(thislist1)


# Remove Specified Index
thislist1.pop(2)
print(thislist1)
# If you do not specify the index, the pop() method removes the last item.
vehicles = ['car', 'bus', 'truck', 'cycle']
vehicles.pop()
x = vehicles.pop()
print(vehicles)
print(x)


# The del keyword also removes the specified index:
del vehicles[1]
print(vehicles)

# Clear the List
# The clear method empties the list.
# The list still remains, but it has no content.
input_dev = ['mouse', 'keyboard', 'microphone']
input_dev.clear()
print(input_dev)


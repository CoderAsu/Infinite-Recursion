# Access Items
# List items are indexed, and you can access them by referring to the index number:
thislist = ["apple", "banana", "cherry"]
print(thislist[1])
# The first item has index 0.

# Negative Indexing
# Negative indexing means start from the end.
# -1 refers to the last item, -2 refers to the second last item etc.
print(thislist[-1])

# Range of Indexes
# You can specify a range of indexes by specifying where to start and where to end the range.
# When specifying a range, the return value will be a new list with the specified items.
thislist1 = ['apple', 'banana', 'cherry', 'orange', 'kiwi', 'melon', 'mango']
print(thislist1[2:5])
# Note: Here the search will start at index 2 (included) and end at index 5 (not included).

# By leaving out the starting value, the range will start at the first item:
print(thislist1[:4])
# By leaving out the end value, the range will go on to the end of the list:
print(thislist1[2:])

# Range of Negative Indexes
# Specify negative indexes if you want to start the search from the end of the list:
print(thislist1[-4:-1])

# By using another semicolon we can increment in list.
print(thislist1[1:6:2])

# Check if Item Exist
# To determine if a specified item is present in a list use the in keyword:
thislist2 = ['car', 'bus', 'truck', 'aeroplane', 'bike']
if 'bus' in thislist2:
    print("Yes, 'bus' is in the vehicles list")

# count() method is used to count how many elements of same type are present in list.
furniture = ['table', 'chair', 'bed', 'table', 'door', 'table']
print(furniture.count('table'))

# Unpacking in list
ipl = ['mi', 'rcb', 'csk']
[blue, red, yellow] = ipl
print(blue)
print(red)
print(yellow)

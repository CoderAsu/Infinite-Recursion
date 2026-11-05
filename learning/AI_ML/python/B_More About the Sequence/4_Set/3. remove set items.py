# To remove an item in a set, use the remove(), or the discard() method.
thisset = {"apple", "banana", "cherry"}
thisset.remove("banana")
print(thisset)
# Note: If the item to remove does exist, remove() will raise an error.

x = {'car', 'bus', 'truck'}
x.discard("car")
print(x)
# If the item to remove does not exist, discard() will NOT raise an error.

# You can also use the pop() method to remove an item, but this method will remove a random item, so you cannot be sure
# what item that gets removed. The return value of the pop() method is the removed item.
this_set = {'apple', 'strawberry', 'orange'}
x = this_set.pop()
print(x)
print(thisset)
# Note: Sets are unordered, so when the pop() method, you do not know which item that gets removed.

# The clear() method empties the set:
this_set.clear()
print(this_set)

# The del() keyword will delete the set completely:
# del x
# print(x)
# this will give you an error

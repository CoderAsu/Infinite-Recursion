# Change Item Value
# To change the value of a specific item, refer to the index number:
thislist = ['apple', 'banana', 'cherry']
thislist[1] = 'orange'
print(thislist)

# Change a Range of Item values
# To change the value of items within a specific range, define a list with the new values, 
# and refer to the range of index numbers where you want to insert the new values:
thislist1 = ['apple', 'orange', 'cherry', 'guava', 'kiwi', 'mango']
thislist1[1:3] = ['blackcurrant', 'watermelon']
print(thislist1)

# If you insert more items than you replace, the new items will be inserted where you specified,
# and the remaining items will move accordingly:
phone = ['Vivo', 'oppo', 'mi', 'oneplus', 'iphone', 'blueberry', 'nokia']
phone[1:2] = ['honor', 'infinix', 'lava']
print(phone)

# If you insert less items than you replace, the new items will be inserted where you specified, 
# and the remaining items will move accordingly:
car = ['ferrari', 'lamborghini', 'buggati', 'Mercedes']
car[1:3] = ['mahindra']
print(car)

# Insert Items
# To insert a new list item, without replacing any of the existing values, we can insert() method.
# The insert() method inserts an item at the specified index:
ipl = ['rcb', 'mi', 'gt', 'csk']
ipl.insert(2, 'dc')
print(ipl)

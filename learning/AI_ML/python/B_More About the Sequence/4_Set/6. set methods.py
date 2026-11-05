# Python has a set of built-in methods that you can use on sets.
'''
Method	                    Shortcut	Description
add()	 	                            Adds an element to the set
clear()	 	                            Removes all the elements from the set
copy()	 	                            Returns a copy of the set
difference()	                -	    Returns a set containing the difference between two or more sets
difference_update()	            -=	    Removes the items in this set that are also included in another, specified set
discard()	 	                        Remove the specified item
intersection()	                &	    Returns a set, that is the intersection of two other sets
intersection_update()	        &=	    Removes the items in this set that are not present in other, specified set(s)
isdisjoint()	 	                    Returns whether two sets have a intersection or not
issubset()	                    <=	    Returns whether another set contains this set or not
issuperset()	                >=	    Returns whether this set contains another set or not
pop()	 	                            Removes an element from the set
remove()	 	                        Removes the specified element
symmetric_difference()	        ^	    Returns a set with the symmetric differences of two sets
symmetric_difference_update()	^=	    Inserts the symmetric differences from this set and another
union()	                        |	    Return a set containing the union of sets
update()	                    |=	    Update the set with the union of this set and others
'''

# 1. add()
fruits: set[str] = {'apple', 'banana', 'cherry'}
fruits.add('orange')
print(fruits)

# 2. clear()
team: set[str] = {'RCB', 'CSK', 'MI'}
team.clear()
print(team)

# 3. copy()
veg: set[str] = {'potato', 'onion', 'brinjal'}
x = veg.copy()
print(x)

# 4. difference()
x: set[str] = {'apple', 'banana', 'cherry'}
y: set[str] = {'google', 'microsoft', 'apple'}
z = x.difference(y)
print(z)

# use '-' as a shortcut instead of difference():
x: set[str] = {'apple', 'banana', 'cherry'}
y: set[str] = {'google', 'microsoft', 'apple'}
w = x - y
print(w)

# join more than two sets:
a = {"apple", "banana", "cherry"}
b = {"google", "microsoft", "apple"}
c = {"cherry", "micra", "bluebird"}
myset = a.difference(b, c)
print(myset)

# join more than two sets with the '-' shortcut:
a = {"apple", "banana", "cherry"}
b = {"google", "microsoft", "apple"}
c = {"cherry", "micra", "bluebird"}
myset = a - b - c
print(myset)

# 5. difference_update()
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.difference_update(y)
print(x)

# The difference_update() method is different from the difference() method, because the difference() method returns a new set, without the unwanted items, 
# and the difference_update() method removes the unwanted items from the original set.

# use '-=' as a shortcut instead of difference_update():
a = {"apple", "banana", "cherry"}
b = {"google", "microsoft", "apple"}
a -= b
print(a)

# join more than two sets:
a = {"apple", "banana", "cherry"}
b = {"google", "microsoft", "apple"}
c = {"cherry", "micra", "bluebird"}
a.difference_update(b, c)
print(a)

# join more than two sets with the -= operator:
a = {"apple", "banana", "cherry"}
b = {"google", "microsoft", "apple"}
c = {"cherry", "micra", "bluebird"}
a -= b | c
print(a)

# 6. discard()
month: set[str] = {'january', 'september', 'december'}
month.discard("september")
print(month)
month.discard('march')
print(month)

# This method is different from the remove() method, because the remove() method will raise an error if the specified item does not exist, and the discard() method will not.

# 7. intersection()
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.intersection(y)
print(z)

# use '&' as a shortcut instead of intersection():
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x & y
print(z)

# Join 3 sets, and return a set with items that is present in all 3 sets:
x = {"a", "b", "c"}
y = {"c", "d", "e"}
z = {"f", "g", "c"}
result = x.intersection(y, z)
print(result)

# Join 3 sets with the & operator:
x = {"a", "b", "c"}
y = {"c", "d", "e"}
z = {"f", "g", "c"}
result = x & y & z
print(result)

# 8. intersection_update()
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.intersection_update(y)
print(x)

# use '&=' as a shortcut instead of intersection_update():
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x &= y
print(x)

# Compare 3 sets, and return a set with items that is present in all 3 sets:
x = {"a", "b", "c"}
y = {"c", "d", "e"}
z = {"f", "g", "c"}
x.intersection_update(y, z)
print(x)

# Join 3 sets with the '&=' operator:
x = {"a", "b", "c"}
y = {"c", "d", "e"}
z = {"f", "g", "c"}
x &= y & z
print(result)

# 9. isdisjoint() : there should be no common elements present inside
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "facebook"}
z = x.isdisjoint(y)
print(z)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.isdisjoint(y)
print(z)

# 10. issubset()
x = {"a", "b", "c"}
y = {"f", "e", "d", "c", "b", "a"}
z = x.issubset(y)
print(z)

# Use '<=' as a shortcut instead of issubset():
z = x <= y
print(z)

# What if not all items are present in the specified set?
x = {"a", "b", "c"}
y = {"f", "e", "d", "c", "b"}
z = x.issubset(y)
print(z)

# 11. issuperset()
x = {"f", "e", "d", "c", "b", "a"}
y = {"a", "b", "c"}
z = x.issuperset(y)
print(z)

# Use '>=' as a shortcut instead of issuperset():
z = x >= y
print(z)

# What if not all items are present in the specified set?
x = {"f", "e", "d", "c", "b"}
y = {"a", "b", "c"}
z = x.issuperset(y)
print(z)

# 12. pop()
inst = {'guitar', 'tabla', 'piano'}
inst.pop()
print(inst)

# Note: The pop() method returns removed value.
fruits = {"apple", "banana", "cherry"}
x = fruits.pop()
print(x)
print(fruits)

# 13. remove()
fruits = {"apple", "banana", "cherry"}
fruits.remove("banana")
print(fruits)

# This method is different from the discard() method, because the remove() method will raise an error if the specified item does not exist, and the discard() method will not.

# 14. symmetric difference()
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.symmetric_difference(y)
print(z)

# Use '^' as a shortcut instead of symmetric_difference():
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x ^ y
print(z)

# 15. symmetric_difference_update()
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.symmetric_difference_update(y)
print(x)

# Use '^=' as a shortcut instead of symmetric_difference_update():
t = {'tomato','potato', 'onion'}
s = {'bus', 'car', 'tomato'}
u = {'tomato', 'aeroplane', 'jet'}
t ^= s ^ u
print(t)

# 16. union()
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.union(y)
print(z)

# Use '|' as a shortcut instead of union():
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x | y
print(z)

# Unify more than 2 sets:
x = {"a", "b", "c"}
y = {"f", "d", "a"}
z = {"c", "d", "e"}
result = x.union(y, z)
print(result)

# Unify 3 sets with the '|' operator:
x = {"a", "b", "c"}
y = {"f", "d", "a"}
z = {"c", "d", "e"}
result = x | y | z
print(result)

# 17. update()
g = {'cricket', 'football', 'hockey'}
h = {1, 2, 3, 4, 'football', 'boxing'}
g.update(h)
print(g)

# Use '|=' as a shortcut instead of update():
g |= h
print(g)

# Insert more than one set:
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = {"cherry", "micra", "bluebird"}
x.update(y, z)
print(x)

# Join more than one set with the '|=' operator:
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = {"cherry", "micra", "bluebird"}
x |= b | c
print(x)
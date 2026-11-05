# There are several ways to join two or more sets in Python.
# The union() and update() methods joins all items from both sets.
# The intersection() methods keeps only the duplicates.
# The difference() method keeps the items from the first set that are not in the other sets(s).
# The symmetric_difference() method keeps all items except the duplicates.

# Union
# The union() method returns a new set with all items from both sets.
set1 = {'a', 'b', 'c'}
set2 = {1, 2, 3}
set3 = set1.union(set2)
print(set3)

# You can use the | operator instead of the union() method, and you will get the same result.
set4 = set1 | set2
print(set4)

# Join Multiple Sets
# All the joining methods and operators can be used to join multiple sets.
# When using a method, just add more sets in the parentheses, separated by commas:
set1 = {'a', 'b', 'c'}
set2 = {1, 2, 3}
set3 = {'John', 'Mary'}
set4 = {'apple', 'banana', 'cherry'}
set5 = set1.union(set2, set3, set4)
print(set5)

# When using the | operator, separate the sets with more | operators:
set1 = {'a', 'b', 'c'}
set2 = {1, 2, 3}
set3 = {'John', 'Mary'}
set4 = {'apple', 'banana', 'cherry'}
set5 = set1 | set2 | set3 | set4
print(set5)


# Join a set and a Tuple
# The union() method allows you to join a set with other data types, like lists or tuples.
# The result will be a set.
x = {'a', 'b', 'c'}
y = (1, 2, 3)
z = x.union(y)
print(z)

# Note: The | operator only allows you to join sets with sets, and not with other data types like you can with the  union() method.


# Update
# The update() method inserts all items from one set into another.
# The update() changes the original set, and does not return a new set.
set11 = {'a', 'b', 'c'}
set12 = {'d', 'e', 'f'}
set11.update(set12)
print(set11)

# Note: Both union() and update() will exclude any duplicate items.


# The intersection() method will return a new set, that only contains the items that are present in both sets.
set_1 = {'apple', 'banana', 'watermelon'}
set_2 = {'google', 'microsoft', 'apple'}
set_3 = set_1.intersection(set_2)
print(set_3)

# You can use the & operator instead of the intersection() method, and you will get the same result.
set_1 = {'apple', 'banana', 'watermelon'}
set_2 = {'google', 'microsoft', 'apple'}
set_3 = set_1 & set_2
print(set_3)

# Note: The & operator only allows you to join sets with sets, and not with other data types like you can with the intersection() method.

# The intersection_update() method will also keep only the duplicates, but it will change the original set instead of returning a new set.
set21 = {"apple", "banana", 'orange'}
set22 = {'cherry', 'orange', 'watermelon'}
set21.intersection_update(set22)
print(set21)

# The values True and 1 are considered the same value. The same goes for False and 0.
set1 = {"apple", 1,  "banana", 0, "cherry"}
set2 = {False, "google", 1, "apple", 2, True}
set3 = set1.intersection(set2)
print(set3)


# Difference
# The difference() method will return a new set that will contain only the items from the first set that are not present in the other set.
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.difference(set2)
print(set3)

# You can use the - operator instead of the difference() method, and you will get the same result.
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1 - set2
print(set3)

# Note: The - operator only allows you to join sets with sets, and not with other data types like you can with the difference() method.


# The difference_update() method will also keep the items from the first set that are not in the other set,
# but it will change the original set instead of returning a new set.
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set1.difference_update(set2)
print(set1)


# Symmetric Differences
# The symmetric_difference() method will keep only the elements that are NOT present in both sets.
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.symmetric_difference(set2)
print(set3)

# You can use the ^ operator instead of the symmetric_difference() method, and you will get the same result.
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1 ^ set2
print(set3)

# Note: The ^ operator only allows you to join sets with sets, and not with other data types like you can with the symmetric_difference() method.


# The symmetric_difference_update() method will also keep all but the duplicates, but it will change the original set instead of returning a new set.
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set1.symmetric_difference_update(set2)
print(set1)

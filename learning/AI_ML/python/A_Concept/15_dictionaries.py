# Dictionaries are used to store data values in key:value pairs.
# A dictionary is a collection which is ordered, changeable and do not allow duplicates.

# As of Python version 3.7, dictionaries are ordered. In Python 3.6 and earlier, dictionaries are unordered.

# Dictionaries are written with curly brackets, and have keys and values:
this_dict = {"brand": "Ford", 'model': 'Mustang', 'year': 1964}


# Dictionary Items
# These are ordered, changeable, and do not allow duplicates.
# Dictionary items are presented in key:value pairs, and can be referred to by using the key name.
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict["brand"])


# Ordered or Unordered?
# When we say that dictionaries are ordered, it means that the items have a defined order, and that order will not change.
# Unordered means that the items do not have a defined order, you cannot refer to an item by using an index.

# Changeable
# Dictionaries are changeable, meaning that we can change, add or remove items after the dictionary has been created.

# Duplicates Not Allowed
# Dictionaries cannot have two items with the same key:
# Duplicates values will overwrite existing values:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "year": 2020
}
print(thisdict)

# To determine how many items a dictionary has, use the len() function:
print(len(thisdict))

# The values in dictionary items can be of any data type:
thisdict = {
  "brand": "Ford",
  "electric": False,
  "year": 1964,
  "colors": ["red", "white", "blue"]
}

# Print the datatype of a dictionary:
print(type(thisdict))


# The dict() Constructor
# It is also possible to use the dict() constructor to make a dictionary.
thisdict = dict(name="John", age=36, country="Norway")
print(thisdict)




# Dictionary Keys in Python
# In Python, dictionary keys don’t have to be strings — they can be of any immutable and hashable type (like integers, tuples, or frozenset). But often, especially in JSON or when working with APIs, you’ll see the rule that all keys must be strings.

# Allowed key types:
"""
  -> Strings = "name": "Subham"
  -> Numbers (integers) = 1: "one"
  -> Tuples (immutable) = (1, 2): "pair"
  -> frozenset = frozenset({1, 2}): "immutable set"
"""

# Not allowed:
"""
  -> Lists = [1, 2]: "list" (unhashable, mutable)
  -> Sets = {1, 2}: "set" (unhasable, mutable)
"""


my_dict = {
    "name": "Subham",
    1: "integer key",
    (2, 3): "tuple key",
    frozenset({1, 2}): "immutable set"
}
print(my_dict)


# An object is hashable if it has a hash value that never changes during its lifetime.




my_dict2 = {
    "firstName": "Subham",
    "lastName": "Padhy",
    "id": 12345,
    "fullname": lambda: my_dict2["firstName"] + " " + my_dict2["lastName"]
}

print(my_dict2["fullname"]())
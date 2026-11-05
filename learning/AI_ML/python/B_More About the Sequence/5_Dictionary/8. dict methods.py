# Python has a set of built-in methods that you can use on dictionaries.
'''
Method	        Description
clear()	        Removes all the elements from the dictionary
copy()	        Returns a copy of the dictionary
fromkeys()	    Returns a dictionary with the specified keys and value
get()	          Returns the value of the specified key
items()	        Returns a list containing a tuple for each key value pair
keys()	        Returns a list containing the dictionary's keys
pop()	          Removes the element with the specified key
popitem()	      Removes the last inserted key-value pair
setdefault()	  Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
update()	      Updates the dictionary with the specified key-value pairs, we can also use the shortcut i.e '|' or '|='
values()	      Returns a list of all the values in the dictionary


'''

# 1. values()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
print(users.values())

# 2. keys()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
print(users.keys())

# 3. pop()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
print(users.pop(1))
print(users)

# 4. popitem()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
users.popitem()
print(users)

# 5. copy()
sample_dict: dict = {0: ['a', 'b'], 1: ['c', 'd']}
my_copy = sample_dict.copy()
print(sample_dict)
print(my_copy)
print(id(sample_dict))
print(id(my_copy))

my_copy[0][0] = "!!!"
print(sample_dict)
print(my_copy)

# 6. get()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
print(users.get(1))
print(users.get(999))
print(users.get(999, 'Missing!'))
print(users)

# 7. setdefault()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
print(users.setdefault(0, "???"))
print(users.setdefault(999, "???"))
print(users)

# 8. clear()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
users.clear()
print(users)

# 9. fromkeys()
x = ('key1', 'key2', 'key3')
y = 0
thisdict = dict.fromkeys(x, y)
print(thisdict)

people: list[str] = ['Mario', 'James', "Henry"]
x = dict.fromkeys(people)
print(x)

y = dict.fromkeys(people, 'unknown')
print(y)
print(people)

# 10. items()
users: dict = {0: 'Ram', 1: 'Shyam', 2: 'Rahul'}
print(users.items())

for k, v in users.items():
    print(k, v)

car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.items()
print(x)

car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.items()
car["year"] = 2018
print(x)

# 11. update()
users: dict = {0: 'Mario', 1: 'Ram', 2: 'James'}
users.update({2: 'Rahul', 3: 'Henry'})
print(users)

print(users | {10: 'spam', 11: 'eggs'})

users |= {13: 'bread', 14: 'butter'}
print(users)
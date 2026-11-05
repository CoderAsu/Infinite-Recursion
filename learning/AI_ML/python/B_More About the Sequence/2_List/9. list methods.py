# Python has a set of built-in methods that you can use on lists.
'''
append()    Adds an element at the end of the list
clear()     Removes all the from the list
copy()      Returns a copy of the list
count()     Returns the number of elements with the specified value
extend()    Add the elements of a list (or any iterable), to the end of the current list
index()     Returns the index of the first element with the specified value
insert()    Adds an element at the specified position
pop()       Removes the element at the specified position
remove()    Removes the item with the specified value
reverse()   Reverses the order of the list
sort()      Sorts the list
'''

# 1. append()
people: list[str] = ["Mario", "Elon", "Trump"]
people.append("Tony Stark")
print(people)

a = ["apple", "banana", "cherry"]
b = ["Ford", "BMW", "Volvo"]
a.append(b)
print(a)

# 2. clear()
fruits: list[str] = ['apple', 'mango', 'orange']
fruits.clear()
print(fruits)

# 3. copy()
cars: list[str] = ["ferrari", 'lamborghini', ["buggati", 'TATA'], 'toyota']
copy_cars: list = cars.copy()

copy_cars.remove("toyota")
copy_cars [2][1] = 'Rolls Royce'
print(cars)
print(copy_cars)

# 4. count()
country: list[str] = ['India', 'USA', "Japan", 'Finland', 'India']
councount = country.count("India")
print(councount)

# 5. extend()
biscuits: list[str] = ["oreo", "marigold", "good day", "googly"]
biscuits2: list[str] = ["bourbon", "patanjali", "Tiger"]
biscuits.extend(biscuits2)
print(biscuits)

# 6. index()
veg: list[str] = ['potato', 'tomato', 'brinjal', 'carrot']
print(veg.index('tomato'))

# 7. insert()
month: list[str] = ['january', 'february', "march"]
month.insert(1, "Septmber")
month.insert(10, 'november')
print(month)
x = month.insert(0, 'april')
print(x)

# 8. pop()
animals: list[str] = ["cow", 'dog', 'horse', 'cat']
x = animals.pop(2)
print(x)
y = animals.pop()
print(y)
print(animals)

# Note: The pop() method returns removed value.

# 9. remove()
color: list[str] = ['red', 'blue', 'green', 'yellow']
color.remove('green')
print(color)

# 10. reverse()
weeks: list[str] = ['sunday', 'monday', 'tuesday', 'wednesday']
weeks.reverse()
print(weeks)

# 11. sort()
people: list[str] = ['Mario', 'Elon', 'John', 'Trump', 'Luigi', 'Bob']
people.sort()
print(people)

sub: list[str] = ['Math', 'Science', 'Hindi', 'Computer', 'Odia', 'English']
sub.sort(key= lambda sub: sub.lower())
print(sub)

color: list[str] = ['red', 'blue', 'green', 'orange']
color.sort(reverse=True)
print(color)

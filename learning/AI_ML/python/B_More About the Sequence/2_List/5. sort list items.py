# Sort List Alphanumerically
# List objects have a sort() method that will sort the list alphanumerically, ascending, by default:
fruits = ['orange', 'mango', 'banana', 'kiwi', 'cherry', 'guava']
fruits.sort()
print(fruits)

num = [100, 50, 65, 83, 31, 17]
num.sort()
print(num)


# Sort Descending
# To sort descending, use the keyword argument 'reverse = True':
fruits.sort(reverse= True)
print(fruits)
num.sort(reverse= True)
print(num)


# Case Insensitive Sort
# By default the sort() method is case sensitive resulting in all capital letters being sorted before lower case letters:
fruits_list1 = ['banana', 'Orange', 'cherry', 'Kiwi']
fruits_list1.sort()
print(fruits_list1)

# Luckily we can use built-in functions as key functions when sorting a list.
# So if you want a case-insensitive sort function, use str.lower as a key function:
fruits_list1.sort(key= str.lower)
print(fruits_list1)

# Reverse Order
# The reverse() method reverses the current sorting order of the elements.
veg = ['potato', 'tomato', 'brinjal', 'onion']
veg.reverse()
print(veg)

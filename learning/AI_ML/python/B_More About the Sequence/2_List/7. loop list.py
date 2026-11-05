# Loop Through a List
# You can loop through the list items by using a for loop:
thislist = ['apple', 'banana', 'cherry']
for r in thislist:
    print(r)

# Loop Through the Index Numbers
# You can also loop through the list items by referring to their index number.
# Use the range() and len() functions to create a suitable iterable.
for i in range(len(thislist)):
    print(thislist[i])
print(len(thislist))


# Using a While Loop
# You can loop through the list items by using a while loop.
# Use the len() function to determine the length of the list, then start at 0 and loop your way through the list items by referring to their indexes.
# Remember to increase the index by 1 after each iteration.
j = 0
while j < len(thislist):
    print(thislist[j])
    j += 1


# Looping Using List Comprehension
# List Comprehension offers the shortest syntax for looping through lists:
[print(x) for x in thislist]

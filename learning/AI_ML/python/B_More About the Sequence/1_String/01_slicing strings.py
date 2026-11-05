# Slicing
# You can return a range of characters by using the slice syntax. Specify the start index and the end index, separated by a colon, to return a part of the string.
a = 'Hello World'
print(a[2:5])
print(len(a))
print(a[:10:3])

# By leaving out the start index, the range will start at the first character.
a = 'Hello World'
print(a[:5])

# By leaving out the end index, the range will go to the end.
a = 'Hello World'
print(a[2:])

# Use negative indexes to start the slice from the end of the string.
a = "Hello World"
print(a[-5:-2:1])
print(a[-7:-2:2])

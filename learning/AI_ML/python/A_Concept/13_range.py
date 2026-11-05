# Range
# The built-in range() function returns an immutable sequence of numbers, commonly used for looping a specific number of times. This set of numbers has its own data type called range.

# Note: Immutable means that it cannot be modified after it is created.

# Creating ranges
# The range() function can be called with 1, 2, or 3 arguments, using this syntax:
# range(start, stop, step)




# Call range() with one argument
# If the range function is called with only one argument, the argument represents the stop value.

# The start argument is optional, and if not provided, it defaults to 0.

# range(10) returns a sequence of each number from 0 to 9. (The start argument, 0 is inclusive, and the stop argument, 10 is exclusive).

x = range(10)
for i in x:
    print(i)
print()




# Call range() with two arguments
# If the range function is called with two arguments, the first argument represents the start value, and the second argument represents the stop value.

# range(3, 10) returns a sequence of each number from 3 to 9.

y = range(3, 10)
for i in y:
    print(i)




# Call range() with three arguments
# If the range function is called with three arguments, the third argument represents the step value.

# The step value means the difference between each number in the sequence. It is optional, and if not provided, it defaults to 1.

# range(3, 10, 2)




# Using List to Display Ranges
# The range object is a data type that represents an immutable sequence of numbers, and it is not directly displayable. Therefore, ranges are often converted to lists for display.

print(list(range(5)))
print(tuple(range(1, 6)))
print(set(range(5, 20, 5)))




# Slicing Ranges
r = range(10)
print(r[2])
print(r[:3])

# Note: The first print statement returns the value at index 2, and the second print statement returns a new range object, from index 0 to 3.




# Membership Testing
# Ranges support membership testing with the in operator.

rng = range(0, 10, 2)
print(6 in rng)
print(7 in rng)

# The return value is True when the number is present in the range, and False when it is not.




# Length
# Range support the len() function to get the number of elements in the range.

range1 = range(0, 10, 2)
print(len(range1))
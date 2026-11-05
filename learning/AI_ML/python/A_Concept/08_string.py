# Strings in python are surrounded by either single quotation marks, or double quotation marks.
print("Hello")
print('Hello')


# You can assign a multiline string to a variable by using three quotes.
a = """The story teaches the importance of friendships 
and that regardless of how big and powerful you are, 
you can always end up in trouble."""
print(a)

a = ''' The story teaches the importance of friendships 
 and that regardless of how big and powerful you are, 
 you can always end up in trouble.'''
print(a)
# Note: In the result, the line breaks are inserted at the same position as in the code.


# You can use quotes inside a string, as long as they don’t match the quotes surrounding the string.
print("It's alright")
print("He is called 'Johnny'")
print('He is called "Johnny"')


'''Like many other popular programming languages, strings in python are arrays of bytes representing Unicode characters. 
However, python does not have a character data type, a single character is empty string with the length of 1. 
Square brackets can be used to access elements of the string.'''
a = "Hello World"
print(a[1])


# Since strings are arrays, we can loop through the characters in a string, with a for loop.
for x in "apple":
    print(x)


# To get the length of a string, use the len() function.
a = "Hello World"
print(len(a))


# To check if a certain phrase or character is present in a string, we can use the keyword in.
txt = "The best things in life are free!"
print("free" in txt)
# Use it in if statement
txt = "The best things in life are free!"
if "free" in txt:
   print("Yes, 'free' is present.")


# To check if a certain phrase or character is not present in a string, we can use the keyword not in.
txt = "The best things in life are free!"
print("expensive" not in txt)
# Use it in if statement
txt = "The best things in life are free!"
if "expensive" not in txt:
   print("No, 'expensive' is not present.")

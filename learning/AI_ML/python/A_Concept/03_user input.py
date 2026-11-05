import math

"""
  input()
  input() function is used to take user input. The default data type for input function is string, hence whenever we require any numeric input we need to specify the data type using the built in data type function int() or float() depending on the type of number we want the user to enter as an input.

  In order to take user input for whole number we will use input() with int():
  int(input("Enter the number"))

  In order to take user input for decimal number we will use input() with float():
  float(input("Enter the number"))

  In order to take user input for string we will use input():
  input("Enter the number")
"""

# User Input
# Python allows for user input
# That means we are able to ask the user for input.

print("Enter your name: ")
name1 = input()
print(f"Hello, {name1}")



# The Python input() function has a prompt parameter, which acts as a message you can put in front of the user input, on the same line.

name2 = input("Enter your name: ")
print(f"Welcome to Python, {name2}")




# Multiple Inputs

name3 = input("Enter your name:")
print(f"Hello {name3}")
fav1 = input("What is your favorite animal:")
fav2 = input("What is your favorite color:")
fav3 = input("What is your favorite number:")
print(f"Do you want a {fav2} {fav1} with {fav3} legs?")





# Input Number
x = input("Enter a number which you need to find the square root: ")

#find the square root of the number:
y = math.sqrt(float(x))

print(f"The square root of {x} is {y}")





# Validate Input
# It is a good practice to validate any input from the user.

y = True
while y == True:
  x = input("Enter a number:")
  try:
    x = float(x)
    y = False
  except:
    print("Wrong input, please try again.")

print("Thank you!")




# Taking multiple inputs in one line
x, y, z = input("Enter three numbers separated by space: ").split()

print(f"The sum of all three numbers is: {int(x) + int(y) + int(z)}")
print()




# Taking multiple inputs and storing them in a list

fruits = input("Enter your favorite fruits separated by space: ")

fruits_list = fruits.split() 
print(f"Your favorite fruits are: {fruits_list}")
print()



# Taking multiple inputs and storing them in a tuple

fruits_tuple = tuple(fruits.split())
print(f"Your favorite fruits are: {fruits_tuple}")
print()





# taking input and converting it to integer using map()

a, b = map(int, input("Enter two numbers separated by space: ").split())

print(f"The sum of the two numbers is: {a + b}")
print()




# using a custom separator

games = input("Enter your favorite games separated by comma: ")
games_list = games.split(", ")
print(f"Your favorite games are: {games_list}")
print()
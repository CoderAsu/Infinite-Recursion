# F-Strings
# F-string allows you to format selected parts of a string.
# To specify a string as an f-string, simply put an f in front of the string literal.

# create an f-string
txt = f"The price is 50 dollars"
print(txt)


# Placeholders and Modifiers
# To format values in an f-string, add placeholders {}, a placeholder can contain variables, operations, functions, and modifiers to format the value.
# Add a placeholder for the price variable:
price = 56
txt = f"The price is {price} dollars"
print(txt)

# A placeholder can also include a modifier to format the value.
# A modifier is included by adding a colon : followed by a legal formatting type, 
# like .2f which means fixed point number with 2 decimals:
# Display the price with 2 decimals:
price1 = 79
txt = f"The price is {price1:.2f} dollars"
print(txt)

# You can also format a value directly without keeping it in a variable:
# Display the value 95 with 2 decimals:
text = f"The price is {95:.2f} dollars"
print(text)


# Perform Operations in F-strings
# You can perform Python operations inside the placeholders.
# You can do math operations:
# Perform a math operation in the placeholder, and return the result:
txt1: str = f"The price is {20 * 59} dollars"
print(txt1)

# You can perform math operations on variables:
# Add taxes before displaying the price:
price: int = 59
tax: float = 0.25
txt2: str = f"The price is {price + (price + tax)} dollars"
print(txt2)

# you can perform if...else statements inside the placeholders:
# Return "Expensive" if the price is over 50, otherwise return "Cheap":
price = 79
txt3: str = f"It is very {'Expensive.' if price>50 else 'cheap.'}"
print(txt3)


# Execute Functions in F-Strings
# You can execute functions inside the placeholder:
# Use the string method upper() to convert a value into upper case letters:
fruit: str = "apples"
txt4: str = f"I love {fruit.upper()}"
print(txt4)

# The function does not have to be a built-in Python method, you can create your own functions and use them:
# Create a function that converts feet into meters:
def myconverter(x):
    return x * 0.3048
txt = f"The plane is flying at a {myconverter(30000)} meter altitude"
print(txt)

# More Modifiers
# There are several other modifiers that can be used to format values:
# use a comma as a thousand separator:
price: int = 59000
txt: str = f"The price is {price:,} dollars"
print(txt)

# Here is a list of all the formatting types:
"""
Formatting Types
:<		Left aligns the result (within the available space)
:>		Right aligns the result (within the available space)
:^		Center aligns the result (within the available space)
:=		Places the sign to the left most position
:+		Use a plus sign to indicate if the result is positive or negative
:-		Use a minus sign for negative values only
: 		Use a space to insert an extra space before positive numbers (and a minus sign before negative numbers)
:,		Use a comma as a thousand separator
:_		Use a underscore as a thousand separator
:b		Binary format
:c		Converts the value into the corresponding Unicode character
:d		Decimal format
:e		Scientific format, with a lower case e
:E		Scientific format, with an upper case E
:f		Fix point number format
:F		Fix point number format, in uppercase format (show inf and nan as INF and NAN)
:g		General format
:G		General format (using a upper case E for scientific notations)
:o		Octal format
:x		Hex format, lower case
:X		Hex format, upper case
:n		Number format
:%		Percentage format
"""

# String format()
# Add a placeholder where you want to display the price:
price: int = 49
txt: str = "The price is {} dollars."
print(txt.format(price))

# Definition and Usage
# The format() method formats the specified value(s) and insert them inside the string's placeholder.
# The placeholder is defined using curly brackets: {}.

# Syntax
# string.format(value1, value2...)

# Parameter Values
"""

Parameter	        Description
value1, value2...	Required. One or more values that should be formatted and inserted in the string.
                    The values are either a list of values separated by commas, a key=value list, or a combination of both.
                    The values can be of any data type.
"""

# Multiple Values
# If you want to use more values, just add more values to the format() method:
quant: int = 3
itemno: int = 567
price: int = 49
myorder: str = "I want {} pieces of item number {} for {:.2f} dollars."
print(myorder.format(quant, itemno, price))

# Index Numbers
# You can use index numbers (a number inside the curly brackets {0} to be sure the values are placed in correct placeholders:)
quantity = 3
itemno1: int = 567
price1: int = 49
myorder: str = "I want {0} pieces of item number {1} for {2:.2f} dollars."
print(myorder.format(quantity, itemno1, price1))

# Also, if you want to refer to the same value more than once, use the index number:
age: int = 36
name: str = "John"
txt: str = "His name is {1}. {1} is {0} years old."
print(txt.format(age, name))

# Named Indexes
# You can use named indexes by entering a name inside the curly brackets {carname}, 
# but then you must use names when you pass the parameter values txt.format(carname = "Ford")
myorder = "I have a {carname}, it is a {model} model."
print(myorder.format(carname = "Ford", model = "Mustang"))

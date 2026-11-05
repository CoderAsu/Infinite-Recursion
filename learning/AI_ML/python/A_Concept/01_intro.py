
# Python is a popular programming language. It was created by Guido van Rossum, and released in 1991.


print("Hello World...")
print("First program - python print Function")
print("It is declared like this:")
print("print('What to print')")




# '#' is used to make a single line comment
# ''' ''' or """ """ is used to make multiline comment

print("Welcome to Python")  # This is a print function

"""Python is a 
Popular programming
language."""
# or
'''Python is a 
popular programming
language'''






# Tokens: Tokens are the smallest units of code that have a specific purpose or meaning. It is also called as lexical unit.
# Types of token are:
'''
1. Keywords
2. Identifiers
3. Operators
4. Literals
5. Punctuators/delimiters
6. Whitespace and Indentation
'''

# 1. Keywords: Keywords are reserved words in Python that have a special meaning and are used to define the syntax and structure of the language.
# These words cannot be used as identifiers for variables, functions, or other objects. There are 35 keywords in latest version of python.
import keyword
print(keyword.kwlist)
''' ['False', 'None', 'True', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 
'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 
'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield'] '''

"""Python has a set of keywords that are reserved words that cannot be used as variable names,
function names, or any other identifiers."""
"""
Keyword     Description
and         A logical operator
or          A logical operator
not         A logical operator
pass        A null statement, a statement that will do nothing
break       To break out of a loop
continue    To continue to the next iteration of a loop
def         To define a function
return      To exit a function and return a value
del         To delete an object
elif        Used in conditional statements, same as else if
else        Used in conditional statements
if          To make a conditional statements
True        Boolean value, result of comparison operations
False       Boolean value, result of comparison operations
None        Represents a null value
for         To create a for loop
while       To create a while loop
is          To test if two variables are equal
in          To check if a value is present in a list, tuple, etc.
with        Used to simplify exception handling
from        To import specific parts of a module
global      To declare a global variable
class       To define a class
assert      For debugging
as          To create an alias
except      Used with exceptions, what to do when an exception occurs
raise       to raise an exception
finally     Used with exceptions, a block of code that will be executed no matter if there is an exception or not
import      To import a module
lambda      To create an anonymous function
nonlocal    To declare a non-local variable
try         To make a try...except statement
yield       To return a list of values from a generator
async       
await       
"""



# 2. Identifiers: Identifiers are user-defined name given to identify variables, functions, classes, modules, or any other user-defined object in Python.
# An identifier start with a letter or the underscore character but not start with a number.
# An identifier can only contain alpha-numeric characters and underscores (A-z, 0-9, _ ).
# Identifier names are case-sensitive (age, Age and AGE are three different variables).
# An identifier cannot be any of the Python keywords.



# 3. Operators: An operator is a symbol that trigger some action when applied to identifier (s)/ operand (s).
# There are 7 types of operators:
'''
a. Arithmetic Operators
b. Assignment Operators
c. Comparison Operators
d. Logical Operators
e. Identity Operators
f. Bitwise Operators
g. Membership Operators
'''



# 4. Literals: Literals are constant values that are directly specified in the source code of a program.
# They represent fixed values that do not change during the execution of the program.
# Python permits following types of literals:
'''
a. String literals
b. Numeric literals
c. Boolean literals
d. Special literal (None)
e. Literal Collection'''

# a. String literals: These are sequences of characters enclosed in single quotes (' ') or double quotes (" ").
# They can contain any printable characters, including letters, numbers, and special characters. 
# Python also supports triple-quoted strings, which can span multiple lines (''' ''' or """ """)

# b. Numeric literals: These can be integers, floats, or complex numbers.

# c. Boolean literals: These represent the truth values "True" or "False". 
# They are used in logical expressions and control flow statements to make decisions based on certain conditions.

# d. Special literal: It includes None, which represents the absence of a value or the null value.
# It is often used to indicate that a variable has not been assigned a value yet or that a function does not return anything.

# e. Literal Collection: It includes list, tuple, set, dict.



# 5. Delimeters/Punctuators: These are characters or symbols used to separate or mark the boundaries of different elements in Python code.
# They are used to group statements, define function or class bodies, enclose string literals, and more.
# It includes parentheses '()', commas ',', brackets '[]', braces '{}', colons ':', semicolons ';'.

# a. parentheses: Define function arguments, control the order of operations, and create tuples.
# b. brackets: Create lists, which are mutable sequences of values.
# c. brace: Define sets (unordered collection of unique elements) and dictionaries (key-value pairs) and also placeholders in string formatting.
# d. commas: Separate elements in tuples, lists, sets, and dictionaries. It also used to separate function arguments and create multiple variable assignments.
# e. colons: Define the body of control flow statements like if, else, for, while and def.
# f. semicolons: Separate multiple statements on a single line for brevity or to combine related statements.



# 6. Whitespace and Indentation: Whitespace and indentation play an important role in Python’s syntax and structure. Unlike many other programming languages, 
# Python uses indentation to define blocks of code and determine the scope of statements. 
# The use of consistent indentation is not only a matter of style but is required for the code to be valid and executable.

# a. Standard Indentation: In Python, the standard indentation is four spaces.

# b. Indentation Methods: Indentation can be done using spaces or tabs, but it’s recommended to use spaces for better compatibility and readability. 
# Mixing tabs and spaces can lead to syntax errors.

# c. Indentation in Control Flow: Indentation is used to define the body of control flow statements like if, else, for, while, and def. 
# The indented block of code following a colon(:) is executed when the control flow condition is met.
# The indentation level must be the same for all statements within the same block.

# d. Whitespace and Readability: Whitespace, including spaces, tabs, and newlines, is used to separate tokens and enhance code readability. 
# Excessive whitespace should be avoided, as it can hinder code comprehension. 
# Python ignores whitespace within parentheses, brackets, and braces, allowing code formatting for improved readability.








# User Input
# Python allows for user input. That means we are able to ask the user for input.
# Python 3.12 uses the input() method.
# Python 2.7 uses the raw_input() method.
username = input("Enter username: ")
print("Username is", username)
print(print(print("HI to All")))
print(print(input("What's your age:")))


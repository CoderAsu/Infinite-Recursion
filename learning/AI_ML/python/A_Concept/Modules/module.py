# Module: A single Python file (.py) containing functions, classes, or variables

# Package: A collection of modules organized in a directory with an __init__.py file.

# Library: A broader collection of packages and modules designed to solve domain-specific problem


import my_mod1 as mx

mx.greeting("Asu")



# Note: When importing using the from keyword, do not use the module name when referring to elements in the module.

from my_mod2 import person1 as p1

print(p1["age"])



from my_mod3 import info
print(info["roll_no"])
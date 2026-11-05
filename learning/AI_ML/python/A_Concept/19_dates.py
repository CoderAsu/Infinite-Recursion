# Python Dates
# A date in Python is not a data type of its own, but we can import a module named datetime to work with dates as date objects.

import datetime

x = datetime.datetime.now()

# Common Attribute to Extract
"""
    year, month, day, hour, minute, second, weekday() where mon = 0 and sun = 6, strftime()
"""

print(x)
print(x.year)
print(x.month)
print(x.day)
print(x.hour)
print(x.minute)
print(x.second)
print(x.weekday())
print()



# Creating Date Objects
# To create a date, we can use the datetime() class(contructor) of the datetime module.

y = datetime.datetime(2021, 5, 17)
print(x)




# The strftime() Method
# The datetime object has a method for formatting date objects into readable strings. The method is called strftime(), and takes one parameter, format, to specify the format of the returned string.

print(y.strftime("%B"))
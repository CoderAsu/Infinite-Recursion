"""
Method	        Description

capitalize()	Converts the first character to upper case
casefold()	    Converts string into lower case
center()	    Returns a centered string
count()	        Returns the number of times a specified value occurs in a string
encode()	    Returns an encoded version of the string
endswith()	    Returns true if the string ends with the specified value
expandtabs()	Sets the tab size of the string
find()	        Searches the string for a specified value and returns the position of where it was found
format()	    Formats specified values in a string
format_map()	Formats specified values in a string
index()	        Searches the string for a specified value and returns the position of where it was found
isalnum()	    Returns True if all characters in the string are alphanumeric
isalpha()	    Returns True if all characters in the string are in the alphabet
isascii()	    Returns True if all characters in the string are ascii characters
isdecimal()	    Returns True if all characters in the string are decimals
isdigit()	    Returns True if all characters in the string are digits
isidentifier()	Returns True if the string is an identifier
islower()	    Returns True if all characters in the string are lower case
isnumeric()	    Returns True if all characters in the string are numeric
isprintable()	Returns True if all characters in the string are printable
isspace()	    Returns True if all characters in the string are whitespaces
istitle()	    Returns True if the string follows the rules of a title
isupper()	    Returns True if all characters in the string are upper case
join()	        Joins the elements of an iterable to the end of the string
ljust()	        Returns a left justified version of the string
lower()	        Converts a string into lower case
lstrip()	    Returns a left trim version of the string
maketrans()	    Returns a translation table to be used in translations
partition()	    Returns a tuple where the string is parted into three parts
replace()	    Returns a string where a specified value is replaced with a specified value
removeprefix()  Returns a left trim version of the string
removesuffix()  Returns a right trim version of the string
rfind()	        Searches the string for a specified value and returns the last position of where it was found
rindex()	    Searches the string for a specified value and returns the last position of where it was found
rjust()	        Returns a right justified version of the string
rpartition()	Returns a tuple where the string is parted into three parts
rsplit()	    Splits the string at the specified separator, and returns a list
rstrip()	    Returns a right trim version of the string
split()	        Splits the string at the specified separator, and returns a list
splitlines()	Splits the string at line breaks and returns a list
startswith()	Returns true if the string starts with the specified value
strip()	        Returns a trimmed version of the string
swapcase()	    Swaps cases, lower case becomes upper case and vice versa
title()	        Converts the first character of each word to upper case
translate()	    Returns a translated string
upper()	        Converts a string into upper case
zfill()	        Fills the string with a specified number of 0 values at the beginning
"""

# 1. capitalize()
text: str = 'hello to all'
print(text.capitalize())

# 2. casefold()
text: str = 'MARIa'
print(text.casefold())

# 3. center()
text: str = 'python'
print(text.center(20, "_"))

# 4. count()
text: str = 'abc_abc_abc_abc'
print(text.count("ab"))

# 5. encode()
text: str = 'Asu Padhy'
print(text.encode(encoding='UTF-8', errors='strict'))

# 6. endswith()
text: str = 'apple is good'
print(text.endswith("e", 3, 9))
print(text.endswith(('e', 'd')))

# 7. expandtabs()
text: str = 'apple\torange\tcherry\tbanana'
print(text)
print(text.expandtabs(20))
print(len(text))
print(len(text.expandtabs(20)))

# 8. find()
text: str = "God saves the king!"
position: int = text.find('saves', 2, 10)
position1: int = text.find('hello')
print(position)
print(text[position])
print(position1)

# 9. format()
text: str = "{subject} is doing {action}."
x = text.format(subject = 'Cat', action = 'meow')
print(x)

text: str = "{} am playing {}."
print(text.format("I", "cricket")) #alternative

# 10. format_map()
coordinates: dict = {'x': 10, 'y': -5}
text: str = "coordinates: ({x}, {y})"
print(text.format_map(coordinates))

# 11. index()
text: str = 'Astronauts recently discovered a banana on the moon! banana'
position: int = text.index("banana")
print(position)
print(text[position])
# both index() and find() work are same but in find() error part gives -1 when it didn't find characters.

# 12. isalnum()
text: str = 'hellokitty123'
print(text.isalnum())

# 13. isalpha()
text: str = 'hellokitty'
print(text.isalpha())

# 14. isascii()
text: str = "hello!@ "
print(text.isascii())
text1 = "cup☕"
print(text1.isascii())
text2 = "café"
print(text2.isascii())
text3 = "୧୨୩୪୫୬୭୮୯"
print(text3.isascii())

# 15. isdecimal() (if a string is a decimal, it also a digit, and numeric)
text: str = '123456789'
text1: str = '୧୨୩୪୫୬୭୮୯'
text2: str = '①②③④⑤⑥⑦⑧⑨'
print(text.isdecimal(), text1.isdecimal(), text2.isdecimal())

# 16. isdigit() (if a string is a digit, then it is also a numeric)
text: str = "123456789"
text1: str = '୧୨୩୪୫୬୭୮୯'
text2: str = '①②③④⑤⑥⑦⑧⑨'
print(text.isdigit(), text1.isdigit(), text2.isdigit())

# 17. isnumeric()
text: str = '123456789'
text1: str = '୧୨୩୪୫୬୭୮୯'
text2: str = '①②③④⑤⑥⑦⑧⑨'
print(text.isnumeric(), text1.isnumeric(), text2.isnumeric())

# 18. isidentifier()
text: str = 'test_sample'
print(text.isidentifier())

# 19. islower()
text: str = 'abc'
print(text.islower())

# 20. isprintable()
text: str = 'text\n'
print(text.isprintable())
text1: str = 'hello'
print(text1.isprintable())

# 21. isspace()
text: str = "    "
print(text.isspace())
print()
txt = "Hello world"
print(txt.isspace())

# 22. istitle()
text: str = "The Video"
print(text.istitle())

# 23. isupper()
text: str = "PYTHON"
print(text.isupper())

# 24. join()
text: str = '-'
print(text.join(['Good', 'days', 'coming']))

# 25. ljust()
text: str = 'hello'
print(text.ljust(20, "_"))

# 26. lower()
text: str = "PYTHON"
print(text.lower())

# 27. lstrip()
text: str = 'hello to all my friends'
print(text.lstrip('hello'))
print(text.lstrip('hello '))
print(text.lstrip('hello to all'))

# 28. & 29. maketrans() & translate()
letter: str = 'That is Bacon Baby Boy.'
table: str = letter.maketrans('B', '9')
print(table)
print(letter.translate(table))

# 30. partition()
text: str = 'text=text1=text2'
print(text.partition("="))
text1: str = "welcome to python programming"
print(text1.partition("welcome"))
print(text1.partition("to"))
print(text1.partition("python"))
print(text1.partition("programming"))

# 31. removeprefix()
text: str = 'python'
print(text.removeprefix('pyt'))

# 32. removesuffix()
text: str = 'python'
print(text.removesuffix('hon'))

# 33. replace()
text: str = 'I want to play cricket.'
print(text.replace('play cricket', 'swim' ))
print(text.replace('cricket', 'football'))
text2: str = "I am good, good and good."
print(text2.replace('good', 'bad', 1))
print(text2.replace('good', 'bad', 2))

# 34. rfind()
text: str = "A: some text. A"
print(text.rfind('A'))
print(text.rfind('happy'))
# find works from left and rfind works from right but both give -1 for wrong input

# 35. rindex()
text: str = 'B: some text. B'
print(text.rindex('B'))
# print(text.rindex("happy")) it gives an error.
# index works from left and rindex works from right

# 36. rjust()
text: str = 'python'
print(text.rjust(20, "_"))

# 37. rpartition()
text: str = 'text=text1=text2'
print(text.rpartition("="))
text1: str = "welcome python to python programming"
print(text1.rpartition("welcome"))
print(text1.rpartition("to"))
print(text1.rpartition("python")) #from right it works
print(text1.rpartition("programming"))
# same as partition but when two words or characters are same it works towards right side

# 38. rsplit() 
text: str = "This is some special stuff."
print(text.rsplit(" ", maxsplit= 2))
text1: str = 'www.website.com'
print(text1.rsplit('.'))

# 39. split()
text: str = 'This is some special stuff.'
print(text.split(" ", maxsplit= 2))

# 40. rstrip()
text: str = 'Mario name is Mario Mario'
print(text.rstrip('Mario'))

# 41. strip()
text: str = 'MarioMario Mario name is MarioMario'
print(text.strip('Mario '))

# 42. lstrip()
text: str = 'Mario name is Mario'
print(text.lstrip('Mario'))

# 43. splitlines()
text: str = 'Remember to comment\n or else...'
print(text.splitlines(keepends= True))

# 44. startswith()
text: str = 'apple'
print(text.startswith("e"))
print(text.startswith(('e', 'a')))

# 45. title()
text: str = "This is a title"
print(text.title())

# 46. upper()
text: str = 'python'
print(text.upper())

# 47. zfill()
text: str = 'hello'
print(text.zfill(20))

# Code	      Result	
# \a          Bell for alert (It’s like Python saying, “Hey, pay attention! Something important happened!”)
# \'	      Single Quote
# \"          Double Quote	
# \\	      Backslash	
# \n	      New Line	
# \t	      Tab	
# \b	      Backspace
# \r	      Carriage Return	
# \f          Form feed (different libraries have different functions)
# \v          Vertical tab (use in different libraries to get the accurate result)	
# \000	      Octal value	
# \x00	      Hex value


print("Hello world \a") # use it in terminal/command prompt to get the result
print('It\'s my computer')
print("Python is \"awesome\"")
print("Would you like car\\bike?") # we can also use it when we are giving path name from system
print("It's eight\\nine")
print("Hello\nworld")
print("Keyword\targuments")
print('Keyword\t\targuments')
print("keyword\t\t\targuments")
print("Keyword\t\t\t\targuments")
print("Hello, \bworld")
print("Hello,  \b\bworld")
print("Hello,   \b\b\bworld")
print("Detective\bCopilot") 
print()
print("Hello, world!\rPython is amazing.")
print("Imagine you’re typing a sentence, and \rsuddenly you want to overwrite the beginning of that sentence without moving to a new line.")
print()
print("Chapter 1: Artificial Intelligence")
print("""Artificial Intelligence (AI) is the theory and development of computer systems capable of performing tasks that historically required human intelligence. Imagine machines recognizing speech, making decisions, and identifying patterns—all without human intervention. 
AI encompasses various technologies, including machine learning, deep learning, and natural language processing. While we often envision humanoid robots when thinking about AI, the reality lies in machine learning-powered services and devices.
These technologies allow computers to recommend songs, optimize travel routes, translate languages, and even generate written content.\f""")
print()
print("Chapter 2: Cyclone")
print("""A cyclone—a tempest with a heart of wind and rain—circulates around a center of low atmospheric pressure. Picture it as a cosmic waltz: north of the Equator, 
it twirls counterclockwise; south of the Equator, it pirouettes clockwise. These cyclonic winds sweep across Earth’s vast canvas, 
leaving their mark—except in the equatorial belt, where they politely decline to dance.""")
print("Stars twinkle,\v\vmoon whispers,\vnight unfolds.")
print()
print("\101") #octal 
print("\x41") #hexadecimal
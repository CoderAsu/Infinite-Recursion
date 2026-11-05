# in this mode if we try to open existing file then it will open and we can append it.
# If does not exist it will create a new file.

f = open("file2.txt", "a+")
f.write("\nPython is an interpreted programming language.")
f.seek(0)
print(f.read())
f.close()
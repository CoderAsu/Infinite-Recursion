# in append mode if we try to open existing file then it will open and we can append it.
# If does not exist it will create a new file.
# if we try to read this will give an error.

f = open("file1.txt","a")
f.write("\nPython is a programming language.")
f.close()


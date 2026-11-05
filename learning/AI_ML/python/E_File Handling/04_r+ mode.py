# READ and WRITE Mode ('r+')
# in this mode if file exist then it will follow on.
# if the file doesn't exist it wil give an error.
# Follow the steps first we have to read the file and then write otherwise it shows nothing.

f2 = open("file1.txt", "r+")
print(f2.read())
f2.write("This is Python Course.")
f2.close()

# if we try to write and read the file, then what will happen 

f3 = open("file2.txt", "r+")
print(f3.tell())
f3.write("Hi")
print(f3.tell())
print(f3.read())
print(f3.tell())
f3.close()
# after reaching the index at 32 there is no characters are there. so It shows blank.
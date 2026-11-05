# open
# read
# write
# close

# open and then close the file it is compulsory to close the file.
# All the methods in the file processing depends on cursor.
# To find the postion of cursor we use the function tell().
# There is a function called seek(), in this the we can change the cursor position by giving index no.


# file_object = open("filename", "mode")
# types of mode:
# r -- read 
# w -- write
# a -- append
# x -- create
# t -- text file
# b -- binary file
# r+ -- read and write
# w+ -- write and read
# a+ -- append and read



f = open("Coding/Programming Languages/Python/5. File Handling/file2.txt", "x") #it will create a file named file1.txt
# The same txt file we want to create it will give an error.

# when the files are in same folder it opens without any error.
# but what if the file is in another location , then need to give the path of the file.

f1 = open(r"F:\Python\jokes.txt", "r")
print(f1.read())
f1.close()

# here f1 is said to be fileObject
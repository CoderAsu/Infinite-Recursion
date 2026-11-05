# WRITE Mode ('w')
# If we try to open "file1.txt" in write mode then all the the information in the file will be deleted.
# But if we open a new file through write mode then it will create a new blank file in which we can write.
# we can't read in write mode.

f1 = open("file2.txt", "w")
data1 = f1.write("Hello, welcome to all in Python.")
f1.close()
# if we try to read in write mode it will give an error.

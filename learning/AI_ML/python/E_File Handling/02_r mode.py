# READ Mode ('r')
# Now we will open the file 
f = open("file2.txt", "r")
data = f.read()
print(data)
f.close()

# If the file does not exist then using "r" mode it will give an error.
# In read mode, we can read the content but we can't write. 

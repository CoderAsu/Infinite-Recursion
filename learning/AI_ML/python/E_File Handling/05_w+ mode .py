# WRITE and READ Mode ("w+")
# In this if the file already exist then it will overwrite the file.
# If does not exist it will create a new file.
f4 = open("file3.txt", "w+")
print(f4.tell())
f4.write("HI and Welcome to Python")
print(f4.tell())
f4.write("this is python course.")
print(f4.tell())
f4.seek(0)
data2 = f4.read()
print(data2)
print(f4.tell())
f4.close()

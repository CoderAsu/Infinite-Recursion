f = open('file4.txt', "w+")

# writable method gives boolean values.
print(f.writable()) # return true if the file is in write mode

f.write("string to write.")
f.write("\nPython is best.")


# seekable methods gives boolean values.
print(f.seekable())

f.seek(0)
f.writelines(["Hello I am Jarvis\n", "I am an AI assistant\n", "I am faster than humans" ])

f.close

f.remove("file1.txt")
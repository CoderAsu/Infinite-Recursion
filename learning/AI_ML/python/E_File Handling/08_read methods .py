f = open("file1.txt", 'r')
for data in f:
    print(data)

print(f.readable()) # Returns true if the file is in read mode
# readable gives boolean value
f.seek(0)
print(f.read())

f.seek(0)
print(f.read(5))

f.seek(0)
print(f.read(5000))


# readline read one line at a time and if we give the index no,,
# then it will follow up at the end of line depending upon the index and then stop when 1st line ends.

f.seek(0)
print("1",f.readline())
print("2",f.readline())
print("3",f.readline())

f.seek(0)
print(f.readline(7))
print(f.readline(4))

f.seek(0)
print(f.readlines())

f.seek(0)
print(f.readlines(12))

f.seek(0)
print(f.readlines(13))


f.close()

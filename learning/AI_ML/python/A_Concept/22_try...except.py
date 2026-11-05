# Exception Handling
# When an error occurs, or exception as we call it, Python will normally stop and generate an error message. These exceptions can be handled using the try statement.


# try: try to do this. It might cause an error.
try:
    x = 10/0

# except: if an error happens, do this instead.
except:
    print("Something went wrong")

# else: if No error happened, do this.
else:
    print("No error, everything is fine")

# finally: Do this no matter what(error or no error).
finally:
    print("This always runs")

print()




# Many Exceptions
# You can define as many exception blocks as you want.


try:
    a = int(input("Enter numerator: "))
    b = int(input("Enter denominator: "))
    result = a/b
except ZeroDivisionError:
    print("You cannot divide by zero")
except ValueError:
    print("Please enter a valid integer")
else:
    print("The result is", result)
finally:
    print("End of the program")

print()



# Raise an exception
# As a Pytnon developer you can choose to throw an exception if a condition occurs. To throw an exception, use the raise keyword.

z = -1
try:
    if z < 0:
        raise Exception("Sorry, no numbers below zero")
except Exception as e:
    print(e)


print()


# You can define what kind of error to raise, and the text to print to the user.


try:
    val = input("Enter a number: ")
    if not type(val) is int:
        raise TypeError("Only integers are allowed")
except TypeError as e:
    print(e)

print()

print("This is the end of the program")


# Here the second raise will not run until the first raise is solved.




# Recursion
# Python also accepts function recursion, which means a defined function can call itself.

"""
Recursion is a common mathematical and programming concept. It means that a function calls itself.
This has the benefitt of meaning that you can loop through data to reach a result.

The developer should be careful with recursion as it can be quite easy to slip into writing a function which never terminates, or 
one that uses excess amounts of memory or processor power.
However, when written correctly recursion can be a very efficient and mathematically-elegant approach to programming.

"""


# Base Case and Recursive Case
"""
    -> base case: A condition that stops the recursion
    -> recursive case: The function calling iteself with a modified argument
"""
# Without a base case, the function would call itself forever, causing a stack overflow error.


def factorial(n):
    if (n==0) or (n==1):
        return 1
    else: 
        return n * factorial(n-1)

print(factorial(5))
print(factorial(4))
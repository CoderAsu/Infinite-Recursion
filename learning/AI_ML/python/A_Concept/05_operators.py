# Operators are used to perform operations on variables and values.
# There are 7 types of operators:
"""
1. Arithmetic Operators
2. Assignment Operators
3. Comparison Operators
4. Logical Operators
5. Identity Operators
6. Membership Operators
7. Bitwise Operators
"""
# 1. Arithmetic Operators: Arithmetic operators are used with numeric values to perform common mathematical operations:
'''
Sno     Operator    Name                Example
1       +           Addition            x + y
2       -           Subtraction         x - y
3       *           Multiplication      x * y
4       /           Division            x / y
5       %           Modulus             x % y
6       **          Exponentiation      x ** y
7       //          Floor division      x // y
'''

# 2. Assignment Operators: Assignment Operators are used to assign values to variables:
'''
Sno     Operator    Example         Same As
1       =           x = 5           x = 5
2       +=          x += 3          x = x + 3
3       -=          x -= 3          x = x - 3
4       *=          x *= 3          x = x * 3
5       /=          x /= 3          x = x / 3
6       %=          x %= 3          x = x % 3
7       //=         x //= 3         x = x // 3
8       **=         x **= 3         x = x ** 3
9       &=          x &= 3          x = x & 3
10      |=          x |= 3          x = x | 3
11      ^=          x ^= 3          x = x ^ 3
12      >>=         x >>= 3         x = x >> 3
13      <<=         x <<= 3         x = x << 3
14      :=          print( x:= 3)   x = 3 print(x)
'''

# 3. Comparison Operators: Comparison Operators are used to compare two values:
'''
Sno     Operator    Name                        Example
1       ==          Equal                       x == y
2       !=          Not equal                   x != y
3       >           Greater than                x > y
4       <           Less than                   x < y
5       >=          Greater than or equal to    x >= y
6       <=          Less than or equal to       x <= y
'''

# 4. Logical Operators: Logical Operators are used to combine conditional statements:
'''
1. and:- Returns True if both statements are true.                  Ex: x < 5 and x < 10
2. or:-  Returns True if one of the statements is true.             Ex: x < 5 or x < 4
3. not:- Reverse the result, returns False if the result is true.   Ex: not(x < 5 and x < 10)
'''

# 5. Identity Operators: Identity operators are used to compare the objects, not if they are equal, but if they are actually the same object, with the same memory location:
'''
1. is:- Returns True if both variables are the same object.         Ex: x is y
2. is not:- Returns True if both variables are not the same object. Ex: x is not y
'''

a = 10
b = 21
c = 10
d = a

print(a is b)
print(a is c)
print(a is d)



# 6. Membership Operators: Membership operators are used to test if a sequence is presented in an object:
'''
1. in:- Returns True if a sequence with the specified value is present in the object.               Ex: x in y
2. not in:- Returns True if a sequence with the specified value is not present in the object.       Ex: x not in y
'''


# 7. Bitwise Operators: Bitwise operators are used to compare (binary) numbers:
'''
1. & (AND):- Sets each bit to 1 if both bits are 1.                                     Ex: x & y
2. | (OR):- Sets each bit to 1 if one of the two bits is 1.                             Ex: x | y
3. ^ (XOR):- Sets each bit to 1 if only one of two bits is 1.                           Ex: x ^ y
4. ~ (NOT):- Inverts all the bits.                                                      Ex: ~x
5. << (Left shift):- Shift left by pushing zeros in from the right and 
                     let the leftmost bits fall off.                                    Ex: x << 2
6. >> (Right shift):- Shift right by pushing copies of leftmost bit in from the left,
                      left let the rightmost bit fall off.                              Ex: x >> 2
'''

# precedence order of bitwise operator
#  (highest)~, <<, >>, &, ^, |(lowest)


# Operator Precedence
# It describes the order in which operations are performed.
'''
()                                              Parenthesis                                                 (Left to Right)
**                                              Exponentiation                                              (Right to Left)
+x, -x, ~x                                      Unary plus, Unary minus, and Bitwise NOT                    (Left to Right)
*, /, //, %                                     Multiplication, Division, Floor division, and Modulus       (Left to Right)
+, -                                            Addition, Subtraction                                       (Left to Right)
<<, >>                                          Bitwise Left shift, Right shift                             (Left to Right)
&, ^, |                                         Bitwise AND, XOR, OR                                        (Left to Right)
==, !=, >, >=, <, <=, is, is not, in, not in    Comparisons, identity, and membership operators             (Left to Right)
not, and, or                                    Logical not, and, or                                        (Left to Right)
=, +=, -=, *=, /=                               Assignment operator                                         (Right to Left)
'''


# Bitwise operators
# AND (&)
a = 0b1010
b = 0b1100
c = a & b
print(bin(c))

# OR (|)
d = a | b
print(bin(d))

# XOR (^)
e = a ^ b
print(bin(e))

# NOT (~)
f = ~a
print(bin(f))

# Left Shift (<<)
g = a << 2
print(bin(g))

# Right Shift (>>)
h = a >> 2
print(bin(h))

# unary plus and minus
num = -32
print(+num)
print(-num)

# order precedence
print(1**3**2**2) # right to left
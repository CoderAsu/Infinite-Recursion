# Variables can store data of different types, and different types can do different things.
# Python has the following data types built-in by default, in these categories:
"""
Numeric Types:      int, float, complex
Text Type:          str
Boolean Type:       bool
None Type:          NoneType
Sequence Types:     list, tuple, range
Set Types:          set, frozenset
Mapping Type:       dict
Binary Types:       bytes, bytearray, memoryview
"""

# You can get the data type of any object by using the type() function:
x = 5
print(type(x))
print()


# In Python, the data type is set when you assign a value to a variable.
'''
Example                                     Data Type
x = "Hello World"                           str
x = 20                                      int
x = 20.5                                    float
x = 5j					                    complex
x = [“car”, “truck”, “bus”]		            list
x = (“car”, “truck”, “bus”)		            tuple
x = range(6)				                range
x = {“name” : “Asu”, “age” : 20 }		    dict
x = {“car”, “truck”, “bus”}		            set
x = frozenset({“car”, “truck”, “bus”})	    frozenset
x = True					                bool
x = b”Hello”				                bytes
x = bytearray(5)				            bytearray
x = memoryview(bytes(5))		            memoryview
x = None				                    NoneType
'''

# If you want to specify the data type, you can use the following constructor functions.
'''
Example                                     Data Type
x = str(“John”)				                str
x = int(20)				                    int
x = float(20.5)				                float
x = complex(5j)				                complex
x = list((“car”, “truck”, “bus”))		    list
x = tuple((“car”, “truck”, “bus”))		    tuple
x = range(6)				                range
x = dict(“name” = “Asu”, “age” = 20)	    dict
x = set((“car”, “truck”, “bus”))		    set
x = frozenset((“car”, “truck”, “bus”))	    frozenset
x = bool(5)				                    bool
x = bytes(5)				                bytes
x = bytearray(5)				            bytearray
x = memoryview(bytes(5))		            memoryview
'''


a: int = 5
b: float = 20.5
c: str = "Hello World"
d: bool = True
e: list = ["car", "truck", "bus"]
f: tuple = ("car", "truck", "bus")
g: range = range(6)
h: dict = {"name": "Asu", "age": 20}
i: set = {"car", "truck", "bus"}
j: frozenset = frozenset({"car", "truck", "bus"})
k: bytes = b"Hello"
l: bytearray = bytearray(5)
m: memoryview = memoryview(bytes(5))
n: None = None

print(type(a))
print(type(b))
print(type(c))
print(type(d))
print(type(e))
print(type(f))
print(type(g))
print(type(h))
print(type(i))
print(type(j))
print(type(k))
print(type(l))
print(type(m))
print(type(n))

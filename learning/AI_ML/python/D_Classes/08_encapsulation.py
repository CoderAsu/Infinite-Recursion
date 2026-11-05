# Encapsulation is about protecting data inside a class.
# It means keeping data(properties) and methods together in a class, while controlling how the data can be accessed from outside the class.

# This prevents accidental changes to your data and hides the internal details of how your class works.






# There are there types of members in the class:
"""
    1) Public members (var) = Accessible everywhere
    2) Protected members (_var) = Accessible within class and child class
    3) Private members (__var) = Accessible only inside the class
"""




# In Python, you can make properties private by using a double underscore (__) prefix.

class PersonA:
    def __init__(self, name, age):
        self.name = name
        self._age = age

p1 = PersonA("Asu", 23)
print(p1.name)
print()
# print(p1.__age) This will cause an error

# Note: Private properties cannot be accessed directly from outside the class.








# To access a private property, you can create a getter method.

class PersonB:
    def __init__(self, name, age):
        self.name = name
        self.__age = age

    def get_age(self):
        return self.__age

p2 = PersonB("John", 26)
print(p2.get_age())
print()







# To modify a private property, you can create a setter method. The setter method can also validate the values before setting it.

class PersonC:
  def __init__(self, name, age):
    self.name = name
    self.__age = age

  def get_age(self):
    return self.__age

  def set_age(self, age):
    if age > 0:
      self.__age = age
    else:
      print("Age must be positive")

p3 = PersonC("Tobias", 25)
print(p3.get_age())

p3.set_age(32)
print(p3.get_age())
print()









# Why Use Encapsulation?
# Encapsulation provides several benefits:

"""
   -> Data Protection: Prevents accidental modification of data
   -> Validation: You can validate data before setting it
   -> Flexibility: Internal implementation can change without affecting external code
   -> Control: You have full control over how data is accessed and modified 
"""

class Student:
  def __init__(self, name):
    self.name = name
    self.__grade = 0

  def set_grade(self, grade):
    if 0 <= grade <= 100:
      self.__grade = grade
    else:
      print("Grade must be between 0 and 100")

  def get_grade(self):
    return self.__grade

  def get_status(self):
    if self.__grade >= 60:
      return "Passed"
    else:
      return "Failed"

student = Student("Emil")
student.set_grade(85)
print(student.get_grade())
print(student.get_status())











# Python also has a convention for protected properties using a single underscore _ prefix. 

class PersonD:
    def __init__(self, name, salary):
        self.name = name
        self._salary = salary

p4 = PersonD("Linus", 50000)
print(p4.name)
print(p4._salary) # Can access, but shouldn't
print()

# Note: A single underscore _ is just a convention. It tells other programmers that the property is intended for internal use, but Python doesn't enforce this restriction.











# You can also make methods private using the double underscore prefix.

class Calculator:
  def __init__(self):
    self.result = 0

  def __validate(self, num):
    if not isinstance(num, (int, float)):
      return False
    return True

  def add(self, num):
    if self.__validate(num):
      self.result += num
    else:
      print("Invalid number")

calc = Calculator()
calc.add(10)
calc.add(5)
print(calc.result)
print()
# calc.__validate(5)  This would cause an error


# Note: Just like private properties with double underscores, private methods cannot be called directly from outside the class. The __validate method can only be used by other methods inside the class.










# Name Mangling
# Name mangling is how Python implements private properties and methods.
# When you use double underscores, Python automatically renames it internally by adding _ClassName in front.
# For example, __age becomes _Person__age



class PersonE:
  def __init__(self, name, age):
    self.name = name
    self.__age = age

p5 = PersonE("Emil", 30)

# This is how Python mangles the name:
print(p5._PersonE__age) # Not recommended!


# Note: While you can access private properties using the mangled name, it's not recommended. It defeats the purpose of encapsulation.




"""
    Feature         Protected(_)        Private(__)
    accessible
    inside class        right               right

    accessible
    in child class      right               wrong

    accessible
    outside class       not recom.          wrong

    name mangling       wrong               right
"""
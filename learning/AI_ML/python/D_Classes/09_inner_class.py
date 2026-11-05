# An inner class is a class defined inside another class. The inner class can access the properties and methods of the outer class.
# Inner classes are useful for grouping class that are only used in one place, making you code more organized.

class Outer:
    def __init__(self):
        self.name = "Outer Class"
    
    def show(self):
        print("This is the outer class")

    class Inner:
        def __init__(self):
                self.name = "Inner Class"

        def display(self):
                print("This is the inner class")


outer = Outer()
print(outer.name)
outer.show()

# To access the inner class, create an object of the outer class, and then create an object of the inner class.

inner = outer.Inner()
inner.display()


















# Inner classes in Python do not automatically have access to the outer class instance.
# If you want the inner class to access the outer class, you need to pass the outer class instance as a parameter.

class Outer:
    def __init__(self):
        self.name = "Asu"

    def outerDisplay():
        print("Hello!")

    class Inner:
        def __init__(self, outer):
            self.outer = outer

        def display(self):
            print(f"Outer class name: {self.outer.name}")

outer = Outer()
inner = outer.Inner(outer)
inner.display()
print()













# Inner classes are useful for creating helper classes that are only used within the context of the outer class.

class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model
        self.engine = self.Engine()

    class Engine:
        def __init__(self):
            self.status = "Off"

        def start(self):
            self.status = "Running"
            print("Engine Started")

        def stop(self):
            self.status = "Off"
            print("Engine Stopped")

    def drive(self):
        if self.engine.status == "Running":
            print(f"Driving the {self.brand} {self.model}")
        else:
            print("Start the engine first!")

car = Car("Toyota", "Corolla")
car.drive()
car.engine.start()
car.drive()
print()









# A class can have multiple inner class.

class Computer:
    def __init__(self):
        self.cpu = self.CPU()
        self.ram = self.RAM()

    class CPU:
        def process(self):
            print("Processing data...")

    class RAM:
        def store(self):
            print("Storing data...")


computer = Computer()
computer.cpu.process()
computer.ram.store()
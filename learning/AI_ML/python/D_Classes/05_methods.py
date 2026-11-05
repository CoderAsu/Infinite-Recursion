# Methods are functions that belong to a class. They define the behavior of objects created from the class.
# Note: All methods must have self as the first parameter.
# Methods can accept parameters just like regular functions.

# Methods can access and modify object properties using self.
# The __str__() method is a special method that control what is returned when the object is printed.

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def celebrate_bday(self):
        self.age += 1
        print(f"Happy birthday {self.name}! You are now {self.age}")

    def __str__(self):
        return f"{self.name} ({self.age})"

p1 = Person("Asu", 23)
p1.celebrate_bday()
print(p1)
print()


# adding a method to an existing class
def greet(self):
    print(f"Hello, {self.name}")

Person.greet = greet
p1.greet()
print()


# we can also pass methods into each object
def sum(a, b):
    print(a + b)

p1.add = sum

p1.add(5, 6)




# adding a method to an existing class using lambda function
Person.greet2 = lambda self: print(f"Hello, I am {self.name} and I am {self.age} years old.")
p1.greet2()
print()







# A class can have multiple methods that work together.
class Playlist:
    def __init__(self, name):
        self.name = name
        self.songs = []

    def add_song(self, song):
        self.songs.append(song)
        print(f"Added: {song}")

    def remove_song(self, song):
        self.songs.remove(song)
        print(f"Removed: {song}")
    
    def show_songs(self):
        print(f"Playlist '{self.name}'")
        for song in self.songs:
            print(" -> " + song)

myPlaylist = Playlist("Favourites")
myPlaylist.add_song("Teri Hasi")
myPlaylist.add_song("Sab Tera")
myPlaylist.add_song("Enjoying my life")
print()

myPlaylist.show_songs()



# You can delete methods from a class using the del keyword.

del Person.celebrate_bday

del p1.add

# p1.add(5, 6) can't be printed because it was deleted on the above line
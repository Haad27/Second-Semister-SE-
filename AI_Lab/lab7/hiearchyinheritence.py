# Base class
# having diffrenet classes but are inheriting one same base class
class Animal:
    def speak(self):
        return "Animal sound"

# Derived class from Animal
class Dog(Animal):
    def speak(self):
        return "Woof!"

# Another derived class from Animal
class Cat(Animal):
    def speak(self):
        return "Meow!"

# Create instances of Dog and Cat
dog = Dog()
cat = Cat()

# Access the speak method from each class
print(dog.speak())  # Outputs: Woof!
print(cat.speak())  # Outputs: Meow!
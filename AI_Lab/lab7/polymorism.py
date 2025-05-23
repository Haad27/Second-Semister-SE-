class Animal:
    def speak(self):
        return "The animal makes a sound"

class Dog(Animal):
    def speak(self):
        return "The dog barks"

class Cat(Animal):
    def speak(self):
        return "The cat meows"

# Polymorphism in action
animals = [Dog(), Cat(), Animal()]

for animal in animals:
    print(animal.speak())

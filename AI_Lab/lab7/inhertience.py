class Animal:
    def eat(self):
        print("This animal eats food")

class Flyable:
    def fly(self):
        print("This animal can fly")

class Bird(Animal, Flyable):    # Multiple inheritance from both Animal and Flyable
    def chirp(self):
        print("This bird chirps")

# Create a bird instance
parrot = Bird()
parrot.eat()    # Inherited from Animal
parrot.fly()    # Inherited from Flyable
parrot.chirp()  # Bird's own method


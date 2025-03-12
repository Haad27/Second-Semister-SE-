class Animal:
    def eat(self):
        print("This animal eats food")

class Dog(Animal):  # Inheritance from Animal
    def bark(self):
        print("The dog barks")

class Labrador(Dog):  # Inheritance from Dog
    def fetch(self):
        print("The labrador fetches")


labrador = Labrador()
labrador.eat()
labrador.bark()
labrador.fetch()
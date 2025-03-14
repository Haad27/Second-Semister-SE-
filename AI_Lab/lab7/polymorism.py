#  you have mulitple classes  and youu are usong one function to call all those classes is i called polymorism

class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

def animal_sound(animal: Animal):
    print(animal.speak())
    



# Create instances of Dog and Cat
dog = Dog()
cat = Cat()

# Call the animal_sound function with different types of animals
animal_sound(dog)  # Outputs: Woof!
animal_sound(cat)  # Outputs: Meow!
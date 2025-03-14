# making a class with a function to call the base class
class animal:
    def speak(self):
        print("Animal makes sound")
class mammal(animal):
    def speak(self):
        print("Mammal makes different sound")
class dog(mammal):
    def speak(self):
        print("Dog barks")
        
# displaying the results 
Dog = dog()
Dog.speak()
Mammal = mammal()
Mammal.speak()
Animal = animal()
Animal.speak()

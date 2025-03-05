class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def printValue(self):
        print(f"Hello my name is {self.name} and age is {self.age}")

        
person = Person("haad", 89)
person.printValue()
        
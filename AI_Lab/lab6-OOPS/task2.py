class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year
    
    def start_car(self):
        print(f"{self.brand} {self.model} has started!")
    
    def stop_car(self):
        print(f"{self.brand} {self.model} has stopped!")

# Creating two car objects
car1 = Car("Toyota", "Camry", 2022)
car2 = Car("Honda", "Civic", 2023)

# Calling methods on car1
car1.start_car()
car1.stop_car()

# Calling methods on car2
car2.start_car()
car2.stop_car()

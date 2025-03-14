# Base class
# // you are having inheritence and more than one base class and you are inheriting from more than one base class
class Vehicle:
    def info(self):
        return "This is a vehicle"

# Derived class from Vehicle
class Car(Vehicle):
    def car_info(self):
        return "This is a car"

# Another base class
class Electric:
    def electric_info(self):
        return "This is an electric vehicle"

# Derived class from both Car and Electric (Multiple Inheritance)
class ElectricCar(Car, Electric):
    def electric_car_info(self):
        return "This is an electric car"

# Create an instance of ElectricCar
electric_car = ElectricCar()

# Access methods from all classes
print(electric_car.info())          # From Vehicle
print(electric_car.car_info())      # From Car
print(electric_car.electric_info()) # From Electric
print(electric_car.electric_car_info()) # From ElectricCar
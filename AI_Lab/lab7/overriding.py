class car:
    def __init__(self,brand,model,year):
        self.brand = brand
        self.model = model
        self.year = year
    def display_info(self):
        print(f"Car brand: {self.brand}, Model: {self.model}, Year: {self.year}")
    def maxspeed(self):
        print("Max speed is 200 km/h")
    def changegrear(self):
        print("gear changed")
        
class electriccar(car):
    def maxspeed(self):
        print("Max speed is 250 km/h")
    def changegrear(self):
        print("gear changed to second")
        

car1 = car("Toyota", "Corolla", 2022)
car1.display_info()
car1.maxspeed()
car1.changegrear()
# // now it will see which classs object is this accrodnign to that it will print that 



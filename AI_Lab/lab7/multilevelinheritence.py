class vehicle:
    def vehicle_info(self):
        print("inside vehivle classs")
class car(vehicle):
    def car_info(self):
     print("inside car class")
class sportcar(car):
    def sports_car_info(self):
        print("inside sports car")
s_car = sportcar()
s_car.vehicle_info()
s_car.sports_car_info
s_car.car_info()
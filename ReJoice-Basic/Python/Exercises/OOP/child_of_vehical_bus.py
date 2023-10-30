class Vehicle:

    def __init__(self, max_speed, mileage):
        self.max_speed = max_speed
        self.mileage = mileage

class Bus(Vehicle):

    def show_speed_and_mileage(self):
        print(f"max_speed of Bus is {self.max_speed} and mileage of Bus is {self.mileage}")
    
bus = Bus(140, 14)

bus.show_speed_and_mileage()

class Vehicle:

    color = "White"

    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

class Bus(Vehicle):
    pass

class Car(Vehicle):
    pass

bus = Bus("Volvo", 150, 23)
car = Car("Porch", 230, 12)

print(f"color= {bus.color}, name= {bus.name}, max_speed= {bus.max_speed}, mileage= {bus.mileage}")
print(f"color= {car.color}, name= {car.name}, max_speed= {car.max_speed}, mileage= {car.mileage}")
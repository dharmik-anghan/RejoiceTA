class Vehical:
    def __init__(self, max_speed: float, mileage: float):
        self.max_speed = max_speed
        self.mileage = mileage

    def show_speed_and_mileage(self):
        return f"max_speed of vehical is {self.max_speed} and mileage is {self.mileage}"


car1 = Vehical(120,18)

print(car1.show_speed_and_mileage())
# print(car1.max_speed, car1.mileage)
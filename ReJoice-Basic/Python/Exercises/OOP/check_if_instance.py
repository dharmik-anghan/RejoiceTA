class Vehicle:
    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity

class Bus(Vehicle):
    pass

class XYZ:
    pass
School_bus = Bus("School Volvo", 12, 50)
vehical = Vehicle("xyz", 21,31)

print(isinstance(School_bus, Vehicle))
print(isinstance(School_bus, XYZ))
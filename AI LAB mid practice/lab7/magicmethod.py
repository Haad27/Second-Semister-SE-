class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

    def __sub__(self, other):
        return Vector(self.x - other.x, self.y - other.y)

    def __mul__(self, scalar):
        return Vector(self.x * scalar, self.y * scalar)

    def __str__(self):
        return f"({self.x}, {self.y})"

# Using the Vector class
v1 = Vector(2, 3)
v2 = Vector(4, 5)

print("v1 + v2 =", v1 + v2)   # Calls __add__
print("v1 - v2 =", v1 - v2)   # Calls __sub__
print("v1 * 3 =", v1 * 3)     # Calls __mul__

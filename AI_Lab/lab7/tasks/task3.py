# making a class with to function one to declare and the other to return adding both
class Box:
    def __init__(self, volume):
        self.volume = volume

    def __add__(self, other):
        # Add the volumes of two Box objects
        return Box(self.volume + other.volume)

# Create two Box objects
box1 = Box(50)
box2 = Box(100)

box3 = box1 + box2

# Print the volume of the new Box
print(box3.volume) 
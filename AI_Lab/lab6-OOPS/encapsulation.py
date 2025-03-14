# last three labs from hard questoins 

class SimpleCounter:
    def __init__(self):
        self.__count = 0  # Private attribute

    def increment(self):
        self.__count += 1

    def get_count(self):
        return self.__count

# Create an instance of SimpleCounter
counter = SimpleCounter()

# Use the public methods to interact with the private attribute
counter.increment()
counter.increment()

# Access the count using the public method
print(counter.get_count())  # Outputs: 2

# Attempting to access the private attribute directly (not recommended)
# print(counter.__count)  # This will raise an AttributeError
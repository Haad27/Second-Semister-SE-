# making main class base class
class Person:
    def show_details(self):
        print("Person details")

# making a class with a function to call the base class
class Employee(Person):
    def show_details(self):
        print("Employee details")
        super().show_details()

# making a class with a function to call the base class
class Manager(Employee):
    def show_details(self):
        print("Manager details")
        super().show_details()

# Create instances
person = Person()
employee = Employee() 
manager = Manager()

# Call show_details() for each instance
person.show_details()
employee.show_details()
manager.show_details()

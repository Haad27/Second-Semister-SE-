class person:
    def show_details(self):
        print("person details")
class employee(person):
    super().show_details()
    def show_details(self):
        print("employee details")
class manager(employee):
    super().show_details()
    def show_details(self):
        print("manager details")
        
person = person()
employee = employee()
manager = manager()

person.show_details()
employee.show_details()
manager.show_details()

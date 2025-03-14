# //usiong a class whihc will also have a value of anohter class
class Company:
    def company_name(self):
        return "google"

# // calling the mthod inside the other method
class Employee(Company):
    def employee_name(self):
        x = super().company_name()
        print("Employee name is John and he works at", x)


employee = Employee()
employee.employee_name()

class Company:
    def company_name(self):
        return "google"

class Employee:
    def employee_name(self):
        x=super().company_name()
        print("Employee name is John and he works at" ,x)


employee = Employee()
employee.employee_name()

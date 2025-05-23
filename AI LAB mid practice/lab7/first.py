class person:
    def person_info(self, name, age):
        print("inside person class")
        print('name', name, 'age', age)

class company:
    def company_info(self, company_name, location):
        print("inside company class")
        print('name', company_name, 'location', location)

class employee(person, company):
    def employee_info(self, salary, skill):
        print("inside emp class")
        print('salary', salary, 'skills', skill)

# Create an employee object
emp = employee()

# Call methods
emp.person_info('jessa', 28)
emp.company_info('google', 'atlanta')
emp.employee_info(12000, 'ML')

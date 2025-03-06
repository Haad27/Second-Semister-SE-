class Employee:
    def __init__(self, name, salary):
        self.name = name        # Public attribute
        self._salary = salary   # Protected attribute
        self.__bonus = 5000     # Private attribute
    # //making objects
    def get_salary(self):
        return {
            "salary": self._salary,
            "bonus": self.__bonus
        }
    # displaying them
    def display_details(self):
        print(f"Employee Name: {self.name}")
        print(f"Salary: {self._salary}")
        print(f"Bonus: {self.__bonus}")

employee = Employee("Sara", 50000)

employee.display_details()

salary_details = employee.get_salary()
print("\nUsing get_salary method:")
print(f"Salary: {salary_details['salary']}")
print(f"Bonus: {salary_details['bonus']}")


class employee:
  def putdata(self):
    self.id = int(input("Enter id : "))
    self.name = input("Enter name : ")
    self.salary = int(input("Enter salary : "))

  def display(self):
    print("\nEmployee ID: ", self.id)
    print("\nEmployee Name: ", self.name)
    print("\nEmployee Salary: ", self.salary)

num_employees = int(input("Enter the amount of employee: "))
employees = []

for i in range(num_employees):
  print(f"\nEnter details for employee {i+1}:")
  emp = employee()
  emp.putdata()
  employees.append(emp)

print("\nEmployee Details:")
for emp in employees:
  emp.display()
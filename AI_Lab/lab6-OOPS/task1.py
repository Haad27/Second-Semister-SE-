# making class and function of students
class Student:
    def __init__(self, name, grade , roll_number , percentage):
        self.name = name
        self.grade = grade
        self.roll_number = roll_number
        self.percentage = percentage
        
        
    def printstudents(self):
         print(f"\n Student Name : {self.name} \n Grade: {self.grade}\n roll_number : {self.roll_number} \n\n")
         
#    output   
stundent1=Student("haad", "C", 123)
stundent1.printstudents()
stundent2=Student("ali", "B", 124)
stundent2.printstudents()
stundent3=Student("ahmed", "A+", 125)
stundent3.printstudents()

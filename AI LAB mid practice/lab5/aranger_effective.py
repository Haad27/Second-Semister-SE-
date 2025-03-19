students1 = ["haad", 89]
students2 = ["ali", 90]
students3 = ["hassan", 78]
students4 = ["hussain", 98]

students = [students1, students2, students3, students4]


students.sort(key=lambda x: x[1], reverse=True)

print(students)

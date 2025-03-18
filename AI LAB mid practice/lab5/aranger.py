students1 = ["haad", 89]
students2 = ["ali", 90]
students3 = ["hassan", 78]
students4 = ["hussain", 98]

students = [students1, students2, students3, students4]



for i in range(len(students)):
    for j in range(len(students) - 1):
        if students[j][1] < students[j+1][1]:
            students[j], students[j+1] = students[j+1], students[j]
print(students)

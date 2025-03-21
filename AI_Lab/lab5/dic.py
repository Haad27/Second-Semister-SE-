student1 = {"haad": 89}
student2 = {"ali": 90}
student3 = {"hassan": 78}
student4 = {"hussain": 98}

# Merging dictionaries correctly
students = {**student1, **student2, **student3, **student4}

sent = list(students.items())

def process_score(students):
    for i in range(len(students)):
        for j in range(len(students) - 1 ):
            if students[j][1] < students[j + 1][1]:
               temp = students[j]
               students[j] = students[j + 1]
               students[j + 1] = temp
    
    for student in students:
        print(student)

process_score(sent)

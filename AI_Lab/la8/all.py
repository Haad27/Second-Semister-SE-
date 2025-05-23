import pandas as pd
import matplotlib.pyplot as plt

# ------------------ OOP Classes ------------------
class Student:
    def _init_(self, name, reg_no, marks):
        self.name = name
        self.reg_no = reg_no
        self.marks = marks  # Dictionary of subject: marks

    def average_marks(self):
        return sum(self.marks.values()) / len(self.marks)

class CSStudent(Student):
    def _init_(self, name, reg_no, marks, prog_score):
        super()._init_(name, reg_no, marks)
        self.prog_score = prog_score

    def final_score(self):
        return self.average_marks() + 0.2 * self.prog_score

# ------------------ CSV Simulated ------------------
data = {
    "Name": ["Ahsan", "Ali", "Zain", "Sara"],
    "RegNo": ["2024071", "2024072", "2024073", "2024074"],
    "Math": [85, 78, 92, 88],
    "Physics": [90, 76, 95, 84],
    "English": [88, 80, 85, 90],
    "Prog": [93, 88, 96, 91]
}
df = pd.DataFrame(data)
df.to_csv("students.csv", index=False)

# ------------------ Read & Analyze ------------------
df = pd.read_csv("students.csv")

students = []
for i, row in df.iterrows():
    marks = {"Math": row["Math"], "Physics": row["Physics"], "English": row["English"]}
    student = CSStudent(row["Name"], row["RegNo"], marks, row["Prog"])
    students.append(student)
    print(f"{student.name}: Final Score = {student.final_score():.2f}")

# ------------------ Visualization ------------------
names = [s.name for s in students]
scores = [s.final_score() for s in students]

plt.figure(figsize=(8, 5))
plt.bar(names, scores, color='skyblue')
plt.title("Final Scores of Students")
plt.xlabel("Students")
plt.ylabel("Final Score")
plt.grid(True)
plt.tight_layout()
plt.show()
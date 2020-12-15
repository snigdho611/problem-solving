n = int(input())
student_marks = {}
for _ in range(n):
    name, *line = input().split()
    scores = list(map(float, line))
    student_marks[name] = scores
query_name = input()
    
for i in student_marks:
    if i == query_name:
        marks = student_marks[i]
        print("{:.2f}".format(float(sum(marks)/len(marks))))
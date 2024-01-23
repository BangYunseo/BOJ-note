summ = scores = 0

for i in range(20):
    name, score, grade = input().split()
    scores += float(score)
    if grade == 'A+':
        summ += float(score) * 4.5
    elif grade == 'A0':
        summ += float(score) * 4.0
    elif grade == 'B+':
        summ += float(score) * 3.5
    elif grade == 'B0':
        summ += float(score) * 3.0
    elif grade == 'C+':
        summ += float(score) * 2.5
    elif grade == 'C0':
        summ += float(score) * 2.0
    elif grade == 'D+':
        summ += float(score) * 1.5
    elif grade == 'D0':
        summ += float(score) * 1.0
    elif grade == 'F':
        summ += float(score) * 0.0
    else:
        scores -= float(score)
print(summ / scores)
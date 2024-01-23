summ = scores = 0

ratinglist = ['A+', 'A0', 'B+', 'B0', 'C+', 'C0', 'D+', 'D0', 'F']
gradelist = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]

for i in range(20):
    name, score, grade = input().split()
    score = float(score)
    if grade != 'P':
        scores += score
        summ += score * gradelist[ratinglist.index(grade)]
print('%.6f' %(summ / scores))
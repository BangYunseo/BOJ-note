T = int(input())
vote = list(input())
countA = countB = 0
for i in range(T):
    if vote[i] == 'A':
        countA += 1
    else:
        countB += 1
if countA > countB:
    print("A")
elif countA < countB:
    print("B")
else:
    print("Tie")
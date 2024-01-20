countA = countB = 0

for i in range(int(input())):
    A, B = map(int, input().split())
    if A > B:
        countA += 1
    elif A < B :
        countB += 1
print('%d %d'%(countA, countB))
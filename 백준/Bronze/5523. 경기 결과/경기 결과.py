import sys
countA = countB = 0
for i in range(int(sys.stdin.readline())):
    A, B = map(int, sys.stdin.readline().split())
    if A > B:
        countA += 1
    elif A < B :
        countB += 1
print('%d %d'%(countA, countB))
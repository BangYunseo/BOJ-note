P, K = map(int, input().split())

primeNum = 0
for i in range(2, K):
    if P % i == 0:
        primeNum = i
        break

if primeNum == 0:
    print("GOOD")
else:
    print("BAD", primeNum)
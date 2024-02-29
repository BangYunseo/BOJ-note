import sys
input = sys.stdin.readline

num = 123456 * 2 + 1
numlist = [1] * num
for a in range(1, num):    
    if a == 1:
        continue
    for i in range(2, int(a ** 0.5) + 1):
        if a % i == 0:
            numlist[a] = 0
            break
while(True):
    n = int(input())
    if (n == 0):
        break
    temp = 0
    for a in range(n + 1, (2 * n) + 1):
        temp += numlist[a]
    print(temp)
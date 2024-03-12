import sys
input = sys.stdin.readline

res = 1
N = int(input())
for i in range(1, N + 1):
    res *= i

count = 0
res = str(res)
j = len(res)
while(True):
    if (res[j - 1] != '0'):
        break
    count += 1
    j -= 1
print(count)
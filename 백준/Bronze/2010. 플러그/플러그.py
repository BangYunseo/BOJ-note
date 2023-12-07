import sys

res = 0
count = 0
for i in range(int(sys.stdin.readline())):
    a = int(sys.stdin.readline())
    res += a
    count += 1
print(res - count + 1)
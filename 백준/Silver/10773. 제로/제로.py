import sys

arr = []
for i in range(int(sys.stdin.readline())):
    a = int(input())
    if a != 0:
        arr.append(a)
    else:
        arr.pop()
print(sum(arr))
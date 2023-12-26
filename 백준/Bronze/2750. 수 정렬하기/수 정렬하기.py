import sys

arr = []
for i in range(int(sys.stdin.readline())):
    a = int(sys.stdin.readline())
    arr.append(a)
arr.sort()
for i in range(len(arr)):
    print(arr[i])
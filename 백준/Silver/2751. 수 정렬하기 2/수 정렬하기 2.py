import sys

arr = []
for i in range(int(sys.stdin.readline())):
    arr.append(int(sys.stdin.readline()))
arr.sort()
for i in range(len(arr)):
    print(arr[i])
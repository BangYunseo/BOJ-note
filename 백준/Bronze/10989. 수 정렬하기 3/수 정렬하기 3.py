import sys

arr = [0] * 10001
for i in range(int(input())):
    a = int(sys.stdin.readline())
    arr[a] = arr[a] + 1
for j in range(len(arr)):
    if(arr[j] != 0):
        for x in range(arr[j]):
            print(j)
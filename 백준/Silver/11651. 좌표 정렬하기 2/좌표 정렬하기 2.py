import sys
arr = []
for i in range(int(sys.stdin.readline())):
    xandy = list(map(int, sys.stdin.readline().split()))
    arr.append(xandy)
arr.sort(key=lambda x: (x[1], x[0]))
for i in range(len(arr)):
    print(arr[i][0], arr[i][1])
import sys
arr = []
for i in range(int(input())):
    age, name = map(str, sys.stdin.readline().split())
    age = int(age)
    arr.append((age, name))
arr.sort(key = lambda x : x[0])
for a in range(len(arr)):
    print(arr[a][0], arr[a][1])
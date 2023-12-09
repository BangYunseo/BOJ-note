import sys

arr = []
add = 0
for i in range(4):
    a, b = map(int, sys.stdin.readline().split())
    add = add - a + b
    arr.append(add)
max = arr[0]
for j in range(1, 4):
    if arr[j] > max:
        max = arr[j]
print(max)
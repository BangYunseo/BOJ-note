a, b = map(int, input().split())
res = 0
arr = []
for j in range(1, b + 1):
    for i in range(j):
        arr.append(j)
print(sum(arr[a - 1:b]))
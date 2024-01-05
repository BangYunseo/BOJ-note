arr = []
arrin = []
res = 0
for i in range(8):
    a = int(input())
    arr.append(a)
for k in range(5):
    res += max(arr)
    arrin.append(arr.index(max(arr)))
    arr[arr.index(max(arr))] = 0
print(res)
arrin.sort()
for k in range(5):
    print(arrin[k] + 1, end = ' ')
N, K = map(int,input().split())

arr = []
res = []
for i in range(1, N + 1):
    arr.append(i)

count = 1
while(len(arr) != 0):
    for a in range(K - 1):
        arr.append(arr.pop(0))
    res.append(arr.pop(0))
print("<", end = '')
for a in range(len(res) - 1):
    print(res[a], end = ", ")
print("%d>" %(res[-1]))
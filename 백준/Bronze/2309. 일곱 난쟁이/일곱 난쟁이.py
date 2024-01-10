arr = []
for i in range(9):
    h = int(input())
    arr.append(h)
res = sum(arr) - 100
for j in range(8):
    for x in range(j + 1, 9):
        if res == (arr[j] + arr[x]):
            a = arr[j]
            b = arr[x]   
arr.remove(a)
arr.remove(b)
arr.sort()
for y in range(len(arr)):
    print(arr[y])
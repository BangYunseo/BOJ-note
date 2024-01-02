res = 0
arr = []
for i in range(9):
    val = int(input())
    arr.append(val)
res = sum(arr)
for j in range(8):
    for k in range(j + 1, 9):
        if res - (arr[j] + arr[k]) == 100:
            a1 = arr[j]
            b1 = arr[k]
            break
arr.remove(a1)
arr.remove(b1)
arr.sort()
for n in arr:
    print(n)
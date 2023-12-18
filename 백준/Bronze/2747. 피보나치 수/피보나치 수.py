n = int(input())
arr = [0, 1, ]
if n == 1:
    print(1)
elif n == 0:
    print(0)
else:
    for i in range(2, n + 1):
        a = arr[i-1] + arr[i-2]
        arr.append(a)
    print(arr[n])
arr = []
for i in range(int(input()) + 1):
    if i == 0:
        arr.append(0)
    elif i == 1:
        arr.append(1)
    else:
        ressum = arr[i - 1] + arr[i - 2]
        arr.append(ressum)
print(arr[-1])
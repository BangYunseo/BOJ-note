arr = []
for i in range(1, 31):
    arr.append(i)
for j in range(28):
    a = int(input())
    arr.remove(a)
for k in range(len(arr)):
    print(arr[k])
arr = []
for i in range(int(input())):
    arr.append(input())
arr = list(set(arr))
arr.sort()
arr.sort(key=len)
for i in arr:
    print(i)
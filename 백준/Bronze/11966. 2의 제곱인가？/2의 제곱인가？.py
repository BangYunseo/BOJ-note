a = int(input())
arr = []
for i in range(31):
    arr.append(2 ** i)
if a in arr:
    print(1)
else:
    print(0)
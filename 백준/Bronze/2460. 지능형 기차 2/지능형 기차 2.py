arr = []
max1 = a = 0
for z in range(10):
    leftp, ridep = map(int, input().split())
    a -= leftp
    a += ridep
    arr.append(a)
max1 = arr[0]
for i in range(1, 10):
    if(arr[i] > max1): 
        max1 = arr[i]
print(max1)
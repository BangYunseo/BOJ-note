arr = []
for i in range(int(input())):
    n = int(input())
    n2 = bin(n)
    list1 = list(n2)
    list1.pop(0)
    list1.remove('b')
    list1.reverse()
    for i in range(len(list1)):
        if list1[i] == '1':
            arr.append(i)
for i in range(len(arr)):
    print(arr[i], end = ' ')
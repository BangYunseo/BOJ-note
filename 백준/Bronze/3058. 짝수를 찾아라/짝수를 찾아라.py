for i in range(int(input())):
    arr2 = []
    testlist = map(int, input().split())
    for j in testlist:
        if j % 2 == 0:
            arr2.append(j)
    arr2.sort()
    print(sum(arr2), arr2[0], end = ' ')
    print()
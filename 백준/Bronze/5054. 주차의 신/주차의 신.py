for i in range(int(input())):
    num = int(input())
    list1 = input().split()
    list1 = list(map(int, list1))
    res = max(list1) - min(list1)
    print(res * 2)
T = int(input())
for i in range(T):
    price = 0
    name = ""
    n = int(input())
    for j in range(n):
        a, b = input().split()
        if int(a) > price :
            price = int(a)
            name = b
    print(name)
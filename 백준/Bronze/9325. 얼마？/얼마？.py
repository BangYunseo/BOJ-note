T = int(input())
for i in range(T):
    price = int(input())
    n = int(input())
    for j in range(n):
        q, p = map(int, input().split())
        price += q * p
    print(price)
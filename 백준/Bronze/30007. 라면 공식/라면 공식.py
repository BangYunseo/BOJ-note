for i in range(int(input())):
    A, B, X = map(int, input().split())
    res = A * (X - 1) + B
    print(res)
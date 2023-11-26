T = int(input())
for i in range(T, 0, -1):
    print(" " * (i - 1) + "*" * (T - i + 1))
for j in range(1, T):
    print(" " * j + "*" * (T - j))
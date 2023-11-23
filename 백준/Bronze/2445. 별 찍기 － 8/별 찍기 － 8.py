T = int(input())
for i in range(1, T + 1):
    print("*" * i + " " * (2 * T - 2 * i) + "*" * i)
for j in range(T - 1, 0, -1):
	print("*" * j + " " * (2 * T - 2 * j) + "*" * j)
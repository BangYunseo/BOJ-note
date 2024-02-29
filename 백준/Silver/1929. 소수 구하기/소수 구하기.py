M, N = map(int, input().split())

def divisor(a):
    if a == 1:
        return False
    else:
        for i in range(2, int(a ** 0.5) + 1):
            if a % i == 0:
                return False
        return True

for i in range(M, N + 1):
    if divisor(i):
        print(i)
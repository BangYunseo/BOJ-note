N, K = map(int, input().split())
resn = resk = 1
for i in range(1, K + 1):
    resn *= (N - i) + 1
    resk *= i
print(resn // resk)
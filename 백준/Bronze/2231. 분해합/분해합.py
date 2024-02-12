N = int(input())
# N = 101x + 11y + 2z
for i in range(1, N + 1):
    num = list(map(int, str(i)))
    res = sum(num) + i
    if res == N:
        print(i)
        break
    if i == N:
        print(0)
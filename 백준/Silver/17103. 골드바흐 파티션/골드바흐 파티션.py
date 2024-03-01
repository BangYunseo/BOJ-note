import sys
input = sys.stdin.readline

prime = [False, False] + [True] * 999999

for i in range(2, 1000001):
    if prime[i]:
        for j in range(i * 2, 1000001, i):
            prime[j] = False

for a in range(int(input())):
    N = int(input())
    count = 0
    for b in range(2, N // 2 + 1):
        if prime[b] and prime[N - b]:
            count += 1
    print(count)
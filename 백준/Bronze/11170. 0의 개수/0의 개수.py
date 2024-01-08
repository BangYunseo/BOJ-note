import sys

for i in range(int(input())):
    zerocount = 0
    N, M = map(int, sys.stdin.readline().split())
    for x in range(N, M + 1):
        for y in str(x):
            if y == '0':
                zerocount += 1
    print(zerocount)
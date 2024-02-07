import sys

for i in range(int(sys.stdin.readline())):
    N, M = map(int, sys.stdin.readline().split())
    count = 0
    for j in range(N, M + 1):
        for x in str(j):
            if x == '0':
                count += 1
    print(count)
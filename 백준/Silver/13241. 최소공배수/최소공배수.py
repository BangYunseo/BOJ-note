import sys
input = sys.stdin.readline

A, B = map(int, input().split())
res = A * B

while B:
    if A > B:
        A, B = B, A
    B = B % A
print(res//A)
import sys
input = sys.stdin.readline

N = int(input())
a = 0
while(a * a <= N):
    a += 1
print(a - 1)
import sys
input = sys.stdin.readline

buttonlist = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
N = int(input())
M = int(input())
chan = abs(100 - N)
if M != 0:
    fixlist = list(input().split())
else:
    fixlist = []

for i in range(1000000):
    for j in str(i):
        if j in fixlist:
            break
    else:
        chan = min(chan, len(str(i)) + abs(i - N))
print(chan)
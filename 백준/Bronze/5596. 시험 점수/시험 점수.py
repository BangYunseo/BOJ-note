import sys

total1 = total2 = 0
MinKook = list(map(int, sys.stdin.readline().split()))
for i in range(4):
    total1 += MinKook[i]
ManSae = list(map(int, sys.stdin.readline().split()))
for i in range(4):
    total2 += ManSae[i]
if(total1 >= total2): print(total1)
else: print(total2)
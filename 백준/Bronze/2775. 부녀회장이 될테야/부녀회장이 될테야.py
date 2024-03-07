import sys
input = sys.stdin.readline

T = int(input())
for i in range(T):
    k = int(input())
    n = int(input())
    
    mem = [i for i in range(1, n + 1)]
    
    for j in range(k):
        apart = []
        for a in range(n):
            apart.append(sum(mem[:(a + 1)]))
        mem = apart.copy()
    print(mem[-1])
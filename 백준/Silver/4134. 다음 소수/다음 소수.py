import sys, math
input = sys.stdin.readline

def fun1(a):
    if a == 0 or a == 1:
        return False
    for i in range(2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return False
    return True

for i in range(int(input())):
    n = int(input())
    while(True):
        if fun1(n):
            print(n)
            break
        else:
            n += 1
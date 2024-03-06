import sys
input = sys.stdin.readline

N = int(input())
stulist = list(map(int, input().split()))
stack = []
res = 1

while stulist:
    if res == stulist[0]:
        res += 1
        stulist.pop(0)
    else:
        stack.append(stulist.pop(0))
    
    while stack:
        if stack[-1] == res:
            stack.pop()
            res += 1
        else:
            break

if len(stack) == 0:
    print("Nice")
else:
    print("Sad")
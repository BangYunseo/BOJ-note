import sys
input = sys.stdin.readline

stack = []
for i in range(int(input())):
    arr = list(map(int, input().split()))
    if arr[0] == 1:
        stack.append(arr[1])
    elif arr[0] == 2:
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())
    elif arr[0] == 3:
        print(len(stack))
    elif arr[0] == 4:
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif arr[0] == 5:
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[-1])
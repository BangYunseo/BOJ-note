import sys
input = sys.stdin.readline
from collections import deque

deque = deque()
for i in range(int(input())):
    arr = input().split()
    if arr[0] == '1':
        deque.appendleft(arr[1])
    elif arr[0] == '2':
        deque.append(arr[1])
    elif arr[0] == '3':
        if len(deque) == 0:
            print(-1)
        else:
            print(deque.popleft())
    elif arr[0] == '4':
        if len(deque) == 0:
            print(-1)
        else:
            print(deque.pop())
    elif arr[0] == '5':
        print(len(deque))
    elif arr[0] == '6':
        if len(deque) == 0:
            print(1)
        else:
            print(0)
    elif arr[0] == '7':
        if len(deque) == 0:
            print(-1)
        else:
            print(deque[0])
    elif arr[0] == '8':
        if len(deque) == 0:
            print(-1)
        else:
            print(deque[-1])
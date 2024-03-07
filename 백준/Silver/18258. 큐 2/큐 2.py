import sys
input = sys.stdin.readline
from collections import deque

queue = deque()
for i in range(int(input())):
    doing = input().split()
    if doing[0] == "push":
        queue.append(doing[1])
    elif doing[0] == "pop":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.popleft())
    elif doing[0] == "size":
        print(len(queue))
    elif doing[0] == "empty":
        if len(queue) == 0:
            print(1)
        else:
            print(0)
    elif doing[0] == "front":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])
    elif doing[0] == "back":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[-1])
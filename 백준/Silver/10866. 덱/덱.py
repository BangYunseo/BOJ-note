import sys
input = sys.stdin.readline

deque = []
for i in range(int(input())):
    arr = input().split()
    if arr[0] == "push_front":
        deque.insert(0, arr[1])
    elif arr[0] == "push_back":
        deque.append(arr[1])
    elif arr[0] == "front":
        if len(deque) == 0:
            print(-1)
        else:
            print(deque[0])
    elif arr[0] == "size":
        print(len(deque))
    elif arr[0] == "back":
        if len(deque) == 0:
            print(-1)
        else:
            print(deque[-1])
    elif arr[0] == "empty":
        if len(deque) == 0:
            print(1)
        else:
            print(0)
    elif arr[0] == "pop_front":
        if len(deque) == 0:
            print(-1)
        else:
            print(deque.pop(0))
    elif arr[0] == "pop_back":
        if len(deque) == 0:
            print(-1)
        else:
            print(deque.pop(-1))
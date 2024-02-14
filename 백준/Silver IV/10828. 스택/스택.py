import sys
arr = []
for i in range(int(sys.stdin.readline())):
    com = sys.stdin.readline().split()
    if com[0] == "push":
        arr.append(com[1])
    elif com[0] == "pop":
        if len(arr) == 0:
            print(-1)
        else:
            print(arr.pop())
    elif com[0] == "size":
        print(len(arr))
    elif com[0] == "empty":
        if len(arr) == 0:
            print(1)
        else:
            print(0)
    else:
        if len(arr) == 0:
            print(-1)
        else:
            print(arr[-1])
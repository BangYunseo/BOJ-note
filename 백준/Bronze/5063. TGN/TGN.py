T = int(input())
for i in range(T):
    r, e, c = map(int,input().split())
    if r + c == e:
        print("does not matter")
    elif r + c < e:
        print("advertise")
    elif r + c > e:
        print("do not advertise")
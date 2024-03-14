import sys
input = sys.stdin.readline

left = 64
arr = []
X = int(input())

if X == 64:
    print(1)
else:
    arr.append(left)
    while(True):
        if sum(arr) == X:
            print(len(arr))
            break
        st1 = min(arr) // 2
        if st1 == 0:
            arr.remove(min(arr))
            print(len(arr))
            break
        arr.remove(min(arr))
        arr.append(st1)
        arr.append(st1)
        if (sum(arr) - arr[-1]) > X:
            arr.pop()
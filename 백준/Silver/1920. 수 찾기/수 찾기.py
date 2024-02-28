import sys
input = sys.stdin.readline

N = int(input())
list1 = list(map(int, input().split()))
list1.sort()

M = int(input())
list2 = list(map(int, input().split()))

for m in list2:
    lt = 0
    rt = N - 1
    
    while lt <= rt:
        mid = (lt + rt) // 2
        if m > list1[mid]:
            lt = mid + 1
        elif m < list1[mid]:
            rt = mid - 1
        else:
            lt = mid
            rt = mid
            break
    if lt == mid and rt == mid:
        print(1)
    else:
        print(0)
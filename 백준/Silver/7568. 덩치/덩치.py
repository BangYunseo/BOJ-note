import sys
input = sys.stdin.readline

arrx = []
arry = []
resarr = []

N = int(input())
for i in range(N):
    x, y = map(int, input().split())
    arrx.append(x)
    arry.append(y)
for j in range(len(arrx)):
    rank = 1
    for a in range(len(arrx)):
        if (arrx[j] < arrx[a]) and (arry[j] < arry[a]):
            rank += 1
    resarr.append(rank)  
for k in range(len(resarr)):
    print(resarr[k], end = ' ')
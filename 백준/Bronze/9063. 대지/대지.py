import sys

arrx = []
arry = []
for i in range(int(sys.stdin.readline())):
    a, b = map(int, sys.stdin.readline().split())
    arrx.append(a)
    arry.append(b)
print((max(arrx) - min(arrx)) * (max(arry) - min(arry)))
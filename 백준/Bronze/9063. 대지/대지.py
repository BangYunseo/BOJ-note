arrx = []
arry = []
for i in range(int(input())):
    a, b = map(int, input().split())
    arrx.append(a)
    arry.append(b)
print((max(arrx) - min(arrx)) * (max(arry) - min(arry)))
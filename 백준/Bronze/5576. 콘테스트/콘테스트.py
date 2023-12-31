arrW = []
arrK = []
for i in range(10):
    a = int(input())
    arrW.append(a)
for j in range(10):
    b = int(input())
    arrK.append(b)
arrW.sort()
arrK.sort()
resW = arrW[-1] + arrW[-2] + arrW[-3]
resK = arrK[-1] + arrK[-2] + arrK[-3]
print(resW, resK, end = " ")
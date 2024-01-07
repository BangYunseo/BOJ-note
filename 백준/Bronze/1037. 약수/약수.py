leng = int(input())
alist = list(map(int, input().split()))
alist.sort()
print(alist[0] * alist[-1])
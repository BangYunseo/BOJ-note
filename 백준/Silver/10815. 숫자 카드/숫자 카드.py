import sys
input = sys.stdin.readline

N = int(input())
arr1 = list(map(int, input().split()))
M = int(input())
arr2 = list(map(int, input().split()))

dic = {}

for i in arr2:
    dic[i] = 0

for a in arr1:
    if a in dic:
        dic[a] = 1
        
for j in dic:
    print(dic[j], end = ' ')
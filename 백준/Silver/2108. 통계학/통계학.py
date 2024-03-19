import sys
input = sys.stdin.readline

N = int(input())
arr = []
for a in range(N):
    arr.append(int(input()))

arr.sort()

print(round((sum(arr)) / len(arr)))
print(arr[len(arr) // 2])

dic = dict()
for b in arr:
    if b in dic:
        dic[b] += 1
    else:
        dic[b] = 1

maximum = max(dic.values())
maxdic = []

for c in dic:
    if maximum == dic[c]:
        maxdic.append(c)

if len(maxdic) > 1:
    print(maxdic[1])
else:
    print(maxdic[0])

print(max(arr) - min(arr))
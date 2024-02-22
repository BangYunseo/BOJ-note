import sys
input = sys.stdin.readline

N, M = map(int, input().split())

dic = dict()
arr = []
count = 0

for i in range(N + M):
    word = input().rstrip()
    if word not in dic:
        dic[word] = 0
    else:
        dic[word] += 1
for a in dic:
    if dic[a] == 1:
        count += 1
        arr.append(a)
arr.sort()
print(count)
for b in arr:
    print(b)
import sys
input = sys.stdin.readline

N, M = map(int, input().split())

arr1 = []
arr2 = []

for i in range(N):
    word = input()
    arr1.append(word)
for j in range(M):
    word2 = input()
    arr2.append(word2)

res = list(set(arr1) & set(arr2))
res.sort()
print(len(res))
for j in range(len(res)):
    print(res[j].rstrip())
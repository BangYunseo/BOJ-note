N = int(input())
listA = list(map(int, input().split()))
M = int(input())
listB = list(map(int, input().split()))
dic = {}
for i in range(len(listB)):
    dic[listB[i]] = 0
for j in listA:
    if j in dic:
        dic[j] += 1
for a in listB:
    print(dic[a], end = " ")
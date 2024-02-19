import sys
input = sys.stdin.readline

N = int(input())
list1 = list(map(int, input().split()))

list2 = sorted(list(set(list1)))
dic = {list2[i] : i for i in range(len(list2))}
for i in list1:
    print(dic[i], end = ' ')
import sys
input = sys.stdin.readline
dic = {}
for i in range(int(input())):
    name, state = map(str, input().split())
    if state == "enter":
        dic[name] = state
    else:
        del dic[name]
dic = sorted(dic.keys(), reverse = True)
for i in dic:
    print(i)
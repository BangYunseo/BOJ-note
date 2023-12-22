max1 = min1 = 0
for i in range(int(input())):
    scorelist = list(map(int, input().split()))
    scorelist.remove(max(scorelist))
    scorelist.remove(min(scorelist))
    res = sum(scorelist)
    if max(scorelist) - min(scorelist) >= 4:
        print("KIN")
    else:
        print(res)
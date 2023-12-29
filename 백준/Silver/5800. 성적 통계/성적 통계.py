for i in range(int(input())):
    print("Class", i+1)
    scorelist = list(map(int, input().split()))
    tempscore = []
    for i in range(len(scorelist) - 1):
        tempscore.append(scorelist[1 + i])
    tempscore.sort()
    gap = 0
    for j in range(len(scorelist) - 2):
        if gap < tempscore[j + 1] - tempscore[j]:
            gap = tempscore[j + 1] - tempscore[j]
    print("Max {}, Min {}, Largest gap {}".format(tempscore[-1], tempscore[0], gap))
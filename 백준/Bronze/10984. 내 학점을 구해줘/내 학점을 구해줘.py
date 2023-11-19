T = int(input())
for i in range(T):
    N = int(input())
    SG = 0
    sum1 = 0
    for j in range(N):
        C, G = map(float, input().split())
        SG += C
        sum1 += C * G
        GPA = sum1 / SG
    print("%d %.1f" %(SG, GPA))
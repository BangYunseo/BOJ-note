T = int(input())
for _ in range(T):
    N = int(input())
    max = 0
    mS = ""
    for i in range(N):
        S, L = input().split()
        L = int(L)
        if(L > max):
            max = L
            mS = S
    print(mS)
        

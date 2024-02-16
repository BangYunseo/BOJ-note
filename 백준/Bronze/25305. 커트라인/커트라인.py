N, K = map(int,input().split())

scorelist = list(map(int, input().split()))
for i in range(K - 1):
    scorelist.remove(max(scorelist))
print(max(scorelist))
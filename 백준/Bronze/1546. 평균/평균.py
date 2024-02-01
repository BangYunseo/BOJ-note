N = int(input())
score = list(map(int, input().split()))
maxV = max(score)
for i in range(len(score)):
    score[i] = score[i] / maxV * 100
print(sum(score) / N)
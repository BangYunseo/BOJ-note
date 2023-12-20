count = [0] * (1000 + 1)
sum1 = 0
for i in range(10):
    a = int(input())
    sum1 += a
    count[a] += 1
print(sum1 // 10)
print(count.index(max(count)))
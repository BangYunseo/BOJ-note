T = int(input())
sum = 0
for i in range(T):
    a, b = map(int, input().split())
    if a > b:
        sum += b
    else:
        sum += b % a
print(sum)
date = int(input())
count = 0
carNum = list(map(int, input().split()))
for num in carNum:
    if num == date:
        count += 1
print(count)
count = 0
n = int(input())
list1 = list(map(int, input().split()))
for i in list1:
    for j in range(2, i + 1):
        if i % j == 0:
            if i == j:
                count += 1
            break
print(count)
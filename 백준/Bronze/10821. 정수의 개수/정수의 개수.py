numlist = list(map(int, input().split(',')))
count = 0
for i in numlist:
    if i == int(i):
        count += 1
print(count)
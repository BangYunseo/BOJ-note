member = 5
arr = []
for i in range(member):
    list1 = map(int, input().split())
    arr.append(sum(list1))
print(arr.index(max(arr)) + 1, max(arr), end = ' ')
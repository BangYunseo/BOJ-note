T = int(input())
list1 = []
for i in range(T):
    name, day, month, year = input().split()
    day, month, year = map(int, (day, month, year))
    list1.append((year, month, day, name))
list1.sort()
print(list1[-1][3])
print(list1[0][3])
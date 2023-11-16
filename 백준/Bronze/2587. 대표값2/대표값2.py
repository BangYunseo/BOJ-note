a = []
add = 0
for i in range(5):
	a.append(int(input()))
a.sort()
print(int(sum(a))//5)
print(a[2])
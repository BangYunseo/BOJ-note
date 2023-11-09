a, b = map(int, input().split())
maxv = max(a, b)
minv = min(a, b)
v = maxv - minv - 1
if maxv == minv or minv + 1 == maxv:
	v = 0
print(v)
for i in range(minv + 1, maxv):
    print(i, end = ' ')
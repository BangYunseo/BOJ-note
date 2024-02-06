arr = []
x, y, w, h = map(int, input().split())
a = w - x
b = h - y
arr.append(x)
arr.append(y)
arr.append(a)
arr.append(b)
print(min(arr))
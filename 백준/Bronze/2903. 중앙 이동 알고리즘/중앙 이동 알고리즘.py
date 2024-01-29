base = v = 2

for i in range(int(input())):
    v += base - 1
    base += 2 ** i
print(v * v)
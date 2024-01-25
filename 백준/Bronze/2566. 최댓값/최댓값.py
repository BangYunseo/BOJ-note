arr = [list(map(int, input().split())) for i in range(9)]

maxval = col = raw = 0

for a in range(9):
    for b in range(9):
        if arr[a][b] >= maxval:
            maxval = arr[a][b]
            col = a + 1
            raw = b + 1
print(maxval)
print(col, raw)
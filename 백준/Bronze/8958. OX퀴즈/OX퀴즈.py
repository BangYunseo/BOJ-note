T = int(input())
for i in range(T):
    count = 0
    add = 1
    ans = list(input())
    for j in ans:
        if j == 'O':
            count += add
            add += 1
        else:
            add = 1
    print(count)
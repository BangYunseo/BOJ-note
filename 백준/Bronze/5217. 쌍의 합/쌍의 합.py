T = int(input())
for i in range(T):
    a = int(input())
    f = 1
    print("Pairs for %d:" %a , end = ' ')
    
    for j in range((a - 1) // 2):
        if j != 0:
            print(',', end = ' ')
        print(f, a - f, end = '')
        f += 1
    print()
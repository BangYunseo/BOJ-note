for i in range(int(input())):
    arrs = []
    arrl = []
    for j in range(int(input())):
        S, L = input().split()
        arrs.append(S)
        arrl.append(int(L))
    print(arrs[arrl.index(max(arrl))])
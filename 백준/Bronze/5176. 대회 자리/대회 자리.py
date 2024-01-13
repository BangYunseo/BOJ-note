K = int(input())

for i in range(K):
    P, M = map(int, input().split())
    arr = [0] * (M + 1)
    person = 0

    for j in range(P):
        num = int(input())
        if arr[num] == 0:
            arr[num] = 1
        else:
            person += 1
    print(person)
for i in range(int(input())):
    str1, str2 = input().split()
    arr = []
    for j in range(len(str1)):
        if ord(str1[j]) > ord(str2[j]):
            arr.append(26 - (ord(str1[j]) - ord(str2[j])))
        else:
            arr.append((ord(str2[j]) - ord(str1[j])))
    print("Distances: ", end = '')
    for a in range(len(arr)):
        print(arr[a], end = " ")
    print()
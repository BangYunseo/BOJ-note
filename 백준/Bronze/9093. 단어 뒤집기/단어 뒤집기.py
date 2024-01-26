for i in range(int(input())):
    string = input().split()
    for j in range(len(string)):
        string[j] = string[j][::-1]
        print(string[j], end = ' ')
    print()
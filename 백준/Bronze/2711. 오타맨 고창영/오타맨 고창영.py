for i in range(int(input())):
    valIndex, valString = input().split()
    valIndex = int(valIndex)
    valString = list(valString)
    valString.pop(valIndex - 1)
    for string in valString:
        print(string, end = '')
    print()
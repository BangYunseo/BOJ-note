for i in range(int(input())):
    testcase = list(map(int, input().split()))
    testcase.remove(max(testcase))
    testcase.remove(min(testcase))
    if max(testcase) - min(testcase) >= 4:
        print("KIN")
    else:
        print(sum(testcase))
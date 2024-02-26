import sys
input = sys.stdin.readline

for i in range(int(input())):
    arr = []
    word = input()
    for i in word:
        if i == '(':
            arr.append(i)
        elif i == ')':
            if arr:
                arr.pop()
            else:
                print("NO")
                break
    else:
        if not arr:
            print("YES")
        else:
            print("NO")
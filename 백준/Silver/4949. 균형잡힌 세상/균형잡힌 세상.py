import sys
input = sys.stdin.readline

while(True):
    arr = list(input().rstrip())
    stack = []
    if(arr[0] == "."):
        break
    for a in arr:
        if a == '(':
            stack.append('(')
        elif a == ')':
            if (len(stack) != 0) and (stack[-1] == '('):
                stack.pop()
            else:
                stack.append(')')
        elif a == '[':
            stack.append('[')
        elif a == ']':
            if len(stack) != 0 and (stack[-1] == '['):
                stack.pop()
            else:
                stack.append(']')
    if (len(stack) == 0):
        print("yes")
    else:
        print("no")
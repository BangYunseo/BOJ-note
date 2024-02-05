X = int(input())

num = 1
while X > num:
    X -= num
    num += 1
    
if num % 2 == 0:
    a = X
    b = num - X + 1
elif num % 2 == 1:
    a = num - X + 1
    b = X
print("%d/%d" %(a, b))
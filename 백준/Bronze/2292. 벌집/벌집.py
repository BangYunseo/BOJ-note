a = int(input())
num = 1

for i in range(a):
    num += i * 6
    if num >= a:
        print(i + 1)
        break
    
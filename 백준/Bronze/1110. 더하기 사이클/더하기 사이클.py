N = int(input())
N2 = N
count = 0
a = '100'
while int(a) != N:
    ten = N2 // 10
    one = N2 % 10
    v1 = ten + one
    v2 = v1 % 10
    a = str(one) + str(v2)
    count += 1
    N2 = int(a)
print(count)
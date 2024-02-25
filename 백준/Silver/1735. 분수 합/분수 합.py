n1, m1 = map(int, input().split())
n2, m2 = map(int, input().split())

res1 = (n1 * m2) + (m1 * n2)
res2 = m1 * m2

temp1 = res1
temp2 = res2

while(temp1 != 0):
    n = temp2 % temp1
    temp2 = temp1
    temp1 = n

print(res1 // temp2, res2 // temp2)
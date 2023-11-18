a, b = map(int, input().split())
tmp = a * b
if a < b:
    a, b = b, a
while(b != 0):
    gcd = a % b
    a = b
    b = gcd
print(a)
print(tmp // a)
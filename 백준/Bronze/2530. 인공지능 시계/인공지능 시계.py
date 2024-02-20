A, B, C = map(int, input().split())
D = int(input())
A += D // 3600
B +=  (D % 3600) // 60
C += (D % 60) % 60
while(C >= 60):
    C -= 60
    B += 1
while(B >= 60):
    B -= 60
    A += 1
while(A >= 24):
    A -= 24
print(A, B, C)
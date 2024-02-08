a = int(input())
b = int(input())
c = int(input())

if a + b + c == 180:
    if a != b and a != c and b != c:
        print("Scalene")
    elif a == b == c:
        print("Equilateral")
    else:
        print("Isosceles")
else:
    print("Error")
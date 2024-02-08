while(True):
    a, b, c = map(int, input().split())
    if a == 0 and b == 0 and c == 0:
        break
    arr = []
    arr.append(a)
    arr.append(b)
    arr.append(c)
    arr.sort()
    if arr[0] + arr[1] <= arr[2]:
        print("Invalid")
    elif a == b == c:
        print("Equilateral")
    elif a != b and a != c and b != c:
        print("Scalene")
    else:
        print("Isosceles")
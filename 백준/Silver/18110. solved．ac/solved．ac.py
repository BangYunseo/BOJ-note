import sys
import math
input = sys.stdin.readline

def rounding(val):
    if val - int(val) >= 0.5:
        return int(val) + 1
    else:
        return int(val)
    
n = int(input())
arr = []
count = n
if n:
    while (count != 0):
        a = int(input())
        arr.append(a)
        count -= 1
    b = rounding(n * 0.15)
    arr.sort()
    if b > 0:
        res = rounding(sum(arr[b:-b]) / len(arr[b:-b]))
        print(res)
    else:
        res = rounding(sum(arr) / len(arr))
        print(res)
else:
    print(0)
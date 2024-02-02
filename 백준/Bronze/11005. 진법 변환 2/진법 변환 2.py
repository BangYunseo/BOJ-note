N, B = map(int, input().split())
res = ''
arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
while N > 0:
    res += str(arr[N % B])
    N //= B
print(res[::-1])
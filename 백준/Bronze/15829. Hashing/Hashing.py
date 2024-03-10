L = int(input())
M = 1234567891
r = 31
word = input()

res = 0

for i in range(L):
    num = ord(word[i]) - 96
    res += num * (r ** i)
print(res % M)
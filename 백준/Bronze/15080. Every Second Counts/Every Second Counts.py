H1, M1, S1 = map(int, input().split(':'))
H2, M2, S2 = map(int, input().split(':'))
temp2 = H2 * 3600 + M2 * 60 + S2
temp1 = H1 * 3600 + M1 * 60 + S1
res = temp2 - temp1
if(res < 0):
    res += 86400
print(res)
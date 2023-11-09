T = int(input())
for i in range(T):
    a = int(input())
    sum = 0
    for j in range(1, a + 1, 2):
    	sum += j
    print(sum)
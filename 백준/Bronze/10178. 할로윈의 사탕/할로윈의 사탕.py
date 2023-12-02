T = int(input())
for i in range(T):
	c, v = map(int, input().split())
	A = c // v
	B = c % v
	print("You get %d piece(s) and your dad gets %d piece(s)." %(A, B))
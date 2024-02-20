a,b,c=map(int,input().split())
d=int(input())

s1=(c+d)%60
m1=(c+d)//60
m2=(b+m1)%60
h1=(b+m1)//60
h2=(a+h1)%24

print(h2,m2,s1)
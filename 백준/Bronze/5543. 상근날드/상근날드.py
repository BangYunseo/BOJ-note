import sys

burger = []
for i in range(3):
    burger.append(int(sys.stdin.readline()))
coke = []
for i in range(2):
    coke.append(int(sys.stdin.readline()))
print(min(burger) + min(coke) - 50)
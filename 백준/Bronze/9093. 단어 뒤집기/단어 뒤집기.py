import sys

for i in range(int(sys.stdin.readline())):
    string = sys.stdin.readline().split()
    for j in range(len(string)):
        string[j] = string[j][::-1]
        print(string[j], end = ' ')
    print()
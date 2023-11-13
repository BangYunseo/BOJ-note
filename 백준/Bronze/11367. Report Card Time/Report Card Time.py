T = int(input())
for i in range(T):
    namescore = input()
    namescore_split = namescore.split()
    name = namescore_split[0]
    score = int(namescore_split[1])
    if 97 <= score <= 100:
        print(name, "A+")
    elif 90 <= score <= 96:
        print(name, "A")
    elif 87 <= score <= 89:
        print(name, "B+")
    elif 80 <= score <= 86:
        print(name, "B")
    elif 77 <= score <= 79:
        print(name, "C+")
    elif 70 <= score <= 76:
        print(name, "C")
    elif 67 <= score <= 69:
        print(name, "D+")
    elif 60 <= score <= 66:
        print(name, "D")
    else:
        print(name, "F")
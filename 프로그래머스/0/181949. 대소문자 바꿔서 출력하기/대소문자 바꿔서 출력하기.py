str = input()
for j in str:
    if j.isupper() == True:
        print(j.lower(), end = '')
    else:
        print(j.upper(), end = '')
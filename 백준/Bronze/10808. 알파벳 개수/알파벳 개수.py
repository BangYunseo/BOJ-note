alphabetarr = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
countarr = [0] * len(alphabetarr)
wordinput = list(input())
for i in range(len(wordinput)):
    for j in range(len(alphabetarr)):
        if wordinput[i] == alphabetarr[j]:
            countarr[j] += 1
for i in range(len(countarr)):
    print(countarr[i], end = ' ')
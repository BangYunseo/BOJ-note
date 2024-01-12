word = str(input())
length = (len(word) // 10) + 1
for i in range(length):
    if i == 0:
        print(word[0:10])
    else:
        print(word[10 * i:10 + (10 * i)])
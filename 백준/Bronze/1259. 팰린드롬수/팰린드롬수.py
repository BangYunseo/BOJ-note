while(True):
    word = input().rstrip()
    if(word == '0'):
        break
    temp = len(word) // 2
    if len(word) % 2 == 0:
        if (word[0:temp] == word[len(word):temp - 1:-1]):
            print("yes")
        else:
            print("no")
    else:
        if word[0:temp] == word[len(word) - 1:temp:-1]:
            print("yes")
        else:
            print("no")
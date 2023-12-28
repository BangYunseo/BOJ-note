count = 0
string = input()
for i in range(len(string)):
    if (string[i] == 'a') or (string[i] == 'e') or (string[i] == 'o') or (string[i] == 'i') or (string[i] == 'u'): 
        count += 1
print(count)
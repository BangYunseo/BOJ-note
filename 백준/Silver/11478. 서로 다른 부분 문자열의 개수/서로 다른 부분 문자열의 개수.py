word = input()
arr = set()
for i in range(len(word)):
    for j in range(i, len(word)):
        arr.add(word[i:j+1])
print(len(arr))
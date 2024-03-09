word = input().upper()
list1 = list(set(word))

count = []
for a in list1:
    at = word.count
    count.append(at(a))

if count.count(max(count)) > 1:
    print("?")
else:
    print(list1[(count.index(max(count)))])
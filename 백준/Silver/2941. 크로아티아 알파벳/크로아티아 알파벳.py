count = 0
croa = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
string = input()

for str in croa:
    string = string.replace(str, '*')
print(len(string))
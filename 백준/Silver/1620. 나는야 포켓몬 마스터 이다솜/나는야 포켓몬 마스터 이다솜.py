import sys
input = sys.stdin.readline

N, M = map(int, input().split())
indexdic = {}
namedic = {}

for i in range(N):
    word = input().strip()
    indexdic[word] = i+1
    namedic[i+1] = word

for j in range(M):
    question = input().strip()
    if question.isdigit() == True:
        print(namedic[int(question)])
    if question.isalpha() == True:
        print(indexdic[question])
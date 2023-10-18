N, M, K= map(int,input().split())
# 3개의 수를 입력받음
a = K // M      # 관중석 번호를 M으로 나눈 몫이 열임
b = K % M       # 관중석 번호를 M으로 나눈 나머지가 행
print(a, b)    # 출력

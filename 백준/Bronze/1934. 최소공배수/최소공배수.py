T=int(input())
# 케이스 입력받음
for i in range(T):
    # 입력받은 케이스 만큼 반복
    # ex) T = 3일 경우, 0~2까지 반복
    a, b = map(int, input().split())
    # 두 개의 수를 입력받음
    result = a * b
    # result라는 변수에 a * b를 입력받음
    
    while b > 0:
    # b의 값이 0이 될 때까지 반복
        a, b = b, a % b
        # 파이썬 swap 사용
        # a에는 b의 값이 저장되고 b에는 a % b 의 값이 저장됨
    # ex) a = 13이고 b = 17일 경우
    # a = 17, b = 4
    # a = 4, b = 1
    # a = 1, b = 0
    print(result // a)
    # 최소공배수 출력

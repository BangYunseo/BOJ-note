T = int(input())
# 테스트 케이스 만큼 입력받음

for i in range(T):
# 입력받은 테스트 케이스 만큼 반복 
    count = 0    
    # sum과 같은 용도 : 입력받은 문자열의 'O' 수만큼 점수를 입력받음
    add = 1
    # O의 점수
    ans = list(input())
    # 문자열을 리스트 형태로 입력받음
    
    for j in ans:
    # * 리스트 만큼 반복
        if j == 'O':
        # 만약 j가 O일 경우
            count += add
            add += 1
            # O의 점수를 count에 저장하고 O가 add를 1 증가시킴
        else:
        # 만약 j가 X일 경우
            add = 1
            # 아무 점수도 저장하지 않으며 add만 1로 초기화
    print(count)
    # 점수를 합산한 값을 출력

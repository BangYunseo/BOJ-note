T = int(input())
# 테스트 케이스 입력
for i in range(T):
# 입력받은 테스트 케이스 만큼 반복
    H, W, N = map(int,input().split())
    # 각각 호텔의 층 수, 각 층의 방 수, 손님의 순서를 저장하는 변수를 입력받음
    
    Room_Floor = N % H * 100
    # 호텔의 층수 계산
    Room_Num = N // H + 1
    # 호텔의 방 번호 계산
    if N % H == 0:
    # 만약 N % H가 0이라면 호텔의 층 수가 0으로 계산되기 때문에 조건문을 사용
        Room_Floor = H * 100
        Room_Num -= 1
        # 각각 층 수와 방 번호를 새로 저장
    
    Key = Room_Floor + Room_Num
    # 방의 층 수와 번호를 더한 값
    print(Key)

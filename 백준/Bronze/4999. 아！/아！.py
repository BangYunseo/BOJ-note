answer1 = input()    # 재환이가 낼 수 있는 소리
answer2 = input()    # 의사가 내도록 요구하는 소리

# 재환이가 낼 수 있는 소리가 의사가 내도록 요구하는 소리보다 커야지만 진료를 받을 수 있음
if len(answer1) >= len(answer2):
    print('go')
    # 따라서 재환이가 낼 수 있는 소리가 의사가 내도록 요구하는 소리보다 클 때만 go 출력
else:
    print('no')
    # 아닐 경우 no 출력

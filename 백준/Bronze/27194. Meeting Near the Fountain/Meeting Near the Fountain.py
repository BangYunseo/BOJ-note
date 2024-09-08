import math

# 입력 받기
n, T = map(int, input().split())
m = int(input())
x, y = map(int, input().split())

# 시내 거리에서 공원 입구까지의 시간 (초 단위)
time_street = m / x

# 공원 내 거리에서 만남의 장소까지의 시간 (초 단위)
time_park = (n - m) / y

# 전체 소요 시간 (초 단위)
total_time_seconds = time_street + time_park

# 남은 시간 (초 단위)
T_seconds = T * 60

# 지연 시간 계산
if total_time_seconds <= T_seconds:
    print(0)
else:
    delay_minutes = math.ceil((total_time_seconds - T_seconds) / 60)
    print(delay_minutes)

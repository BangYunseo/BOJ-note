T = int(input())
for i in range(T):
    
    H, W, N = map(int,input().split())
    Room_Floor = N % H * 100
    Room_Num = N // H + 1
    if N % H == 0:
        Room_Floor = H * 100
        Room_Num -= 1
    Key = Room_Floor + Room_Num

    print(Key)
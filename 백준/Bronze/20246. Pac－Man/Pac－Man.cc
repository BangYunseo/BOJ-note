#include <iostream>

using namespace std;

int main() {
    // PS 필수: 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    if (!(cin >> r >> c)) return 0;

    // 1. 현재 위치(Start Point) 출력
    cout << r << " " << c << "\n";

    // 2. (0, 0) 좌표로 이동 (Base Camp)
    // - 위로 이동 (Row를 0으로)
    while (r > 0) {
        r--;
        cout << r << " " << c << "\n";
    }
    // - 왼쪽으로 이동 (Col을 0으로)
    while (c > 0) {
        c--;
        cout << r << " " << c << "\n";
    }

    // 3. (0, 0)부터 (9, 9)까지 'ㄹ'자 순회 (Snake Pattern)
    // 이때 r, c는 이미 0, 0인 상태입니다.
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            // 짝수 행: 왼쪽 -> 오른쪽 (0 -> 9)
            for (int j = 0; j < 10; j++) {
                // *중요*: 위에서 (0,0)에 도착하면서 좌표를 찍었기 때문에
                // 여기서 (0,0)을 또 찍으면 이동 거리가 0이 되어 오답 처리됨.
                if (i == 0 && j == 0) continue; 
                
                cout << i << " " << j << "\n";
            }
        } else {
            // 홀수 행: 오른쪽 -> 왼쪽 (9 -> 0)
            for (int j = 9; j >= 0; j--) {
                cout << i << " " << j << "\n";
            }
        }
    }

    return 0;
}

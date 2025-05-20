#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long X, Y;
    int W, S;
    
    cin >> X >> Y >> W >> S;

    long long res = 0;

    if (S >= 2 * W) {
        // 대각선보다 수직 + 수평이 더 좋은 경우
        res = (X + Y) * W;
    } else if (S <= W) {
        // 대각선 직선하나보다 좋은 경우
        long long maxXY = max(X, Y);
        long long minXY = min(X, Y);
        long long diff = maxXY - minXY;

        if ((X + Y) % 2 == 0) {
            // 짝수 거리 : 전부 대각선
            res = max(X, Y) * S;
        } else {
            // 홀수 거리 : 하나는 직선 보정
            res = (max(X, Y) - 1) * S + W;
        }
    } else {
        // 대각선이 수직 + 수평보다 좋으면서 수직 or 수평 하나보단 안좋은 경우
        long long diag = min(X, Y);
        long long remain = abs(X - Y);
        res = diag * S + remain * W;
    }

    cout << res;
}
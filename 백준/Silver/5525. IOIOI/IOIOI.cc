#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    string S;
    
    cin >> N >> M >> S;
    int res_count = 0; // 결과 카운트
    int i = 0;         // 문자열의 시작 위치

    while (i <= M - 1) {
        int temp_count = 0;

        // IOI 패턴이 연속적으로 나타나는지 확인
        if (S[i] == 'I') {
            while (i + 2 < M && S[i + 1] == 'O' && S[i + 2] == 'I') {
                temp_count++;
                i += 2; // 패턴 IOI가 하나 확인될 때마다 두 칸 이동
                if (temp_count == N) { 
                    res_count++; // N번의 패턴 발견
                    temp_count--; // 중첩된 패턴을 고려
                }
            }
        }
        i++;
    }

    cout << res_count;
    return 0;
}

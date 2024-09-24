#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, U, D;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; // 옷걸이 종류 입력
    }
    cin >> U >> D; // 상의와 하의 개수 입력

    string word(N, ' '); // 결과 문자열 초기화

    // 먼저 전용 옷걸이에 상의와 하의를 걸자
    for (int i = 0; i < N; i++) {
        if (arr[i] == 1) { // 상의 전용
            if (U > 0) {
                U--;
                word[i] = 'U';
            } else {
                cout << "NO\n";
                return 0; // 상의 부족
            }
        } else if (arr[i] == 2) { // 하의 전용
            if (D > 0) {
                D--;
                word[i] = 'D';
            } else {
                cout << "NO\n";
                return 0; // 하의 부족
            }
        }
    }

    // 이제 남은 상의와 하의 개수 확인
    for (int i = 0; i < N; i++) {
        if (arr[i] == 3) { // 둘 다 걸 수 있는 경우
            if (U > 0) {
                U--;
                word[i] = 'U';
            } else if (D > 0) {
                D--;
                word[i] = 'D';
            }
        }
    }

    // 모든 옷을 잘 걸었는지 확인
    if (U == 0 && D == 0) {
        cout << "YES\n" << word << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    while (true) {
        cin >> N;
        cin.ignore();  // 숫자 다음의 줄바꿈 문자를 무시합니다.
        if (N == 0) 
            break;

        string lines[N];
        for (int i = 0; i < N; i++) {
            getline(cin, lines[i]);
        }

        int column = 1;  // 첫 번째 열에서 시작합니다.
        for (int i = 0; i < N; i++) {
            while (column <= lines[i].length() && lines[i][column - 1] != ' ') {
                column++;
            }
        }
        cout << column << endl;
    }
    
    return 0;
}

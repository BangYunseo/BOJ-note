#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;
    
    int count_0 = 0, count_1 = 0;

    // 첫 번째 문자에 대한 처리
    if (word[0] == '0') count_0++;
    else count_1++;

    // 두 번째 문자부터 그룹을 나눔
    for (int i = 1; i < word.length(); i++) {
        if (word[i] != word[i - 1]) {
            if (word[i] == '0') count_0++;
            else count_1++;
        }
    }

    // 더 적은 그룹을 뒤집는 것이 최소 횟수
    cout << min(count_0, count_1) << "\n";
}

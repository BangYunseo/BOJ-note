#include <iostream>
#include <unordered_set>
#include <list>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, L;
    cin >> K >> L;

    unordered_set<string> memSet;  // 중복을 확인하는 set
    unordered_map<string, list<string>::iterator> memMap;  // 리스트에서 위치를 추적하는 map
    list<string> memList;

    string temp;
    for (int i = 0; i < L; i++) {
        cin >> temp;

        // 중복값이 존재하면, 리스트에서 해당 값 제거하고 다시 맨 뒤에 추가
        if (memSet.count(temp)) {
            // 이미 존재하는 값을 리스트에서 제거
            memList.erase(memMap[temp]);
        }

        // 새로 추가: 리스트 뒤에 추가하고, 그 위치를 맵에 저장
        memSet.insert(temp);
        memList.push_back(temp);
        memMap[temp] = prev(memList.end());
    }

    // 처음 K개만 출력
    int cnt = 0;
    for (const auto& val : memList) {
        if (cnt++ >= K) break;
        cout << val << '\n';
    }

    return 0;
}

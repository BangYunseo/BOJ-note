#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 함수 정의: 최대 공약수(gcd) 구하기
int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // 모든 차이의 최대 공약수를 구하기
    int g = 0;
    for (int i = 1; i < n; i++) {
        g = gcd(g, abs(arr[i] - arr[0]));
        if (g == 1) break; // 최대 공약수가 1이면 더 이상 진행할 필요 없음
    }
    
    // g의 약수를 찾아 m 후보군으로 사용
    vector<int> candidates;
    for (int i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            candidates.push_back(i);
            if (i != g / i) {
                candidates.push_back(g / i);
            }
        }
    }
    
    sort(candidates.begin(), candidates.end());
    
    // 각 후보에 대해 k를 구하고, 조건을 만족하는지 확인
    for (int m : candidates) {
        vector<int> mod_counts(m, 0);
        for (int i = 0; i < n; i++) {
            mod_counts[arr[i] % m]++;
        }
        
        for (int k = 0; k < m; k++) {
            if (mod_counts[k] >= (n + 1) / 2) {
                cout << m << ' ' << k << '\n';
                return 0;
            }
        }
    }
    
    return 0;
}

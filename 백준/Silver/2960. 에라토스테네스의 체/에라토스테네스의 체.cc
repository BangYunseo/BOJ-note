#include <iostream>
#include <vector>

using namespace std;

int func(int a, int b){
    vector<bool> v(a + 1, true);
    int count = 0;

    for(int i = 2; i <= a; i++){
        // 2 ~ N 까지의 수 
        if(v[i] == false) continue;
        // 이미 지워진 수라면 건너뛰기

        for(int j = i; j <= a; j += i){
            // i의 배수인 j
            if(v[j] == true){
                // 지우지 않은 수인 경우
                v[j] = false;
                // 지우기
                if(++count == b) return j;
                // b번째 값(K)이라면 리턴
            }
        }
    }
    return -1;
}

int main(){
    int N, K;
    cin >> N >> K;
    cout <<  func(N, K);
}
#include <iostream>

using namespace std;

int main(){
    int N, study, count = 0;
    cin >> N;
    
    int page_P[N] = {0, };
    for(int i = 0; i < N; i++) cin >> page_P[i];
    for(int i = 0; i < N; i++){
        cin >> study;
        if(page_P[i] <= study) count++;
    }
    cout << count;
}
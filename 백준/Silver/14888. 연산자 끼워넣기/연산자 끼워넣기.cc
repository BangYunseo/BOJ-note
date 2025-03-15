#include <iostream>
#include <algorithm>
#define VAL 1000000000

using namespace std;

int N;
int oper[4] = {0};
int num[12];
int minV = VAL, maxV = -VAL;

void f(int res, int cnt){
    if(cnt == N - 1){
        if(minV > res) minV = res;
        if(maxV < res) maxV = res;
        return;
    }
    
    for(int i = 0; i < 4; i++){
        if(oper[i] == 0) continue;
        oper[i]--;
        
        if(i == 0){
            f(res + num[cnt + 1], cnt + 1);
        } else if(i == 1){
            f(res - num[cnt + 1], cnt + 1);
        } else if(i == 2){
            f(res * num[cnt + 1], cnt + 1);
        } else {
            f(res / num[cnt + 1], cnt + 1);
        }
        
        oper[i]++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> num[i];
    
    for(int i = 0; i < 4; i++) cin >> oper[i];
    
    f(num[0], 0);
    
    cout << maxV << '\n' << minV;
}
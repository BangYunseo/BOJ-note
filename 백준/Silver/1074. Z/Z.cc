#include <iostream>

using namespace std;

int N, r, c;
int a, b, answer;
void solve(int a, int b, int num){
    if(a == r && b == c){
        cout << answer << '\n'; 
        return;
    }
    
    if(r < a + num && r >= a && c < b + num && c >= b){
        solve(a, b, num / 2);
        solve(a, b + num / 2, num / 2);
        solve(a + num / 2, b, num / 2);
        solve(a + num / 2, b + num / 2, num / 2);
    }
    else answer += num * num;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    cin >> N >> r >> c;
    
    solve(0, 0, (1 << N));
}
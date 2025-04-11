#include <iostream>
#include <algorithm>

using namespace std;

int N, K, counter = 0;
string Burger;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> K >> Burger;
    
    for(int i = 0; i < N; i++){
        if(Burger[i] == 'P'){
            for(int j = max(i - K, 0); 
                j <= min(i + K, N - 1); j++){
                if(Burger[j] == 'H'){
                    counter++;
                    Burger[j] = 'X';
                    // 먹은 햄버거 X처리
                    break;
                }
            }
        }
    }
    cout << counter;
}
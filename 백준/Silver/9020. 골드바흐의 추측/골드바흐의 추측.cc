#include <iostream>
#include <vector>

#define MAX 10001
using namespace std;

int n;
bool isPrime[MAX];

void eratos(){
    fill(isPrime, isPrime + MAX, true);
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i = 2; i * i < MAX; i++){
        if(isPrime[i]){
            for(int j = i * i; j < MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
}
pair<int, int> goldGuess(int num){
    int a = num / 2;
    int b = num / 2;
    
    while(true){
        if(isPrime[a] && isPrime[b]){
            return {a, b};
        }
        a--;
        b++;
    }
}
int main(){
    int T;
    cin >> T;

    eratos();
        
    for(int i = 0; i < T; i++){
        cin >> n;
        pair<int, int> resV = goldGuess(n);
        cout << resV.first << ' ' << resV.second << endl;
    }
}
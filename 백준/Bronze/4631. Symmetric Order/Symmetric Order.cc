#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int count = 0;
    while(true){
        string word[16] = {};
        count++;
        int N; 
        cin >> N;
        if(N == 0) break;
        
        for(int i = 0; i < N; i++){
            cin >> word[i];
        }
        cout << "SET " << count << endl;
        if(N % 2 != 0){
            for(int i = 0; i <= N - 1; i += 2) cout << word[i] << endl;
            for(int i = N - 2; i > 0; i -= 2) cout << word[i] << endl;
        }
        else if(N % 2 == 0){
            for(int i = 0; i <= N - 1; i += 2) cout << word[i] << endl;
            for(int i = N - 1; i > 0; i -= 2) cout << word[i] << endl;
        }
    }
}
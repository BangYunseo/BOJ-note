#include <iostream>
#include <algorithm>

using namespace std;

int N, ans = 0;
char word[51][51];

void check(){
    char c; 
    for(int i = 0; i < N; i++){
        int count = 1;
        c = word[i][0];
        for(int j = 1; j < N; j++){
            if(word[i][j] == c){
                count += 1;
            }
            else {
                count = 1;
            }
            c = word[i][j];
            if(count > ans) ans = count;
        }
    }
    for(int j = 0; j < N; j++){
        int count = 1; 
        c = word[0][j];
        for(int i = 1; i < N; i++){
            if(word[i][j] == c){
                count += 1;
            }
            else
                count = 1;
            c = word[i][j];
            if(count > ans) ans = count;
        }
    }
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> word[i][j];
        }
    }
    
    for(int i = 0;  i < N; i++){
        for(int j = 0; j < N - 1; j++){
            swap(word[i][j], word[i][j + 1]);
            check(); 
            swap(word[i][j], word[i][j + 1]);
        }
    }
    
    for(int j = 0;  j < N; j++){
        for(int i = 0; i < N - 1; i++){
            swap(word[i][j], word[i + 1][j]);
            check(); 
            swap(word[i][j], word[i + 1][j]);
        }
    }
    
    cout << ans;
}
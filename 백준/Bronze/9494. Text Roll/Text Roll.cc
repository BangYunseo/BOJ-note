#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, max, temp;
    string word;
    while(true){
        cin >> N;
        cin.ignore();
        if(N == 0) 
            break;

        string word[N];
        for(int i = 0; i < N; i++){
            getline(cin, word[i]);
        }

        max = 1;
        for(int j = 0; j < N; j++){
            while(max <= word[j].length() && word[j][max - 1] != ' '){
                max++;
            }
        }
        cout << max << endl;
    }
}
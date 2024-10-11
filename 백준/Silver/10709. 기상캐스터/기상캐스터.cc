#include <iostream>
#include <string>

using namespace std;

int main(){
    int H, W, count = -1; 
    cin >> H >> W;
    cin.ignore();
    
    bool cloudy;
    string word[H];
    for(int i = 0; i < H; i++){
        getline(cin, word[i]);
        count = -1;
        cloudy = false;
        for(int j = 0; j < W; j++){
            if(word[i][j] == 'c') cloudy = true;
            
            if(cloudy){
                if(word[i][j] == '.') count++;
                else count = 0;
                cout << count << ' ';
            } else {
                if(word[i][j] == 'c') count = 0;
                cout << count << ' ';
            }
        }
        cout << endl;
    }
}
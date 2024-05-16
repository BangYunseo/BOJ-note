#include <iostream>

using namespace std;

string arr[8] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
int main(){
    int T;
    cin >> T;
    
    string let, res("");
    cin >> let;
    for(int i = 0; i < T; i++){
        int check = 0;
        for(int j = 0; j < 8; j++){
            int count = 0;
            for(int k = 0; k < 6; k++){
                if(let[k] != arr[j][k]){
                    count++;
                    if(count > 1)
                        break;
                }
            }
            if((count == 0) || (count == 1)){
                res += j + 65;
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << i + 1 << '\n';
            return 0;
        }
        else{
            let.erase(0, 6);
        }
    }
    cout << res << "\n";
}
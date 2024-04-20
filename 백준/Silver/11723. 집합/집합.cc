#include <iostream>
#include <cstring>
using namespace std;

int M;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> M;
    
    string word = "";
    int temp;
    int arr[21] = {0, };
    
    for(int i = 0; i < M; i++){
        cin >> word;
        if(word == "add"){
            cin >> temp;
            if(arr[temp] == 0) // 값이 없을 경우
                arr[temp] = 1;
        }
        else if(word == "remove"){
            cin >> temp;
            if(arr[temp] == 1)
                arr[temp] = 0; 
        }
        else if(word == "check"){
            cin >> temp;
            if(arr[temp] == 1) 
                cout << "1\n";
            else 
                cout << "0\n";
        }
        else if(word == "toggle"){
            cin >> temp;
            if(arr[temp] == 1)
                arr[temp] = 0;
            else 
                arr[temp] = 1;
        }
        else if(word == "all"){
            for(int i = 1; i <= 20; i++) arr[i] = 1;
        }
        else if(word == "empty") memset(arr, 0, sizeof(arr));
    }
}
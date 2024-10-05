#include <iostream>
#include <string>

using namespace std;

int main(){
    int num[10] = {0, };
    int N;
    char d;
    cin >> N >> d;
    
    for(int i = 1; i <= N; i++){
        string temp = to_string(i);
        for(int j = 0; j < temp.length(); j++){
            num[temp[j] - '0']++;
        }
    }
    cout << num[d - '0'];
}
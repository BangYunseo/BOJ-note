#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int sub_4[4], sub_2[2];
    for(int i = 0; i < 4; i++){
        cin >> sub_4[i];
    }
    for(int i = 0; i < 2; i++){
        cin >> sub_2[i];
    }
    sort(sub_4, sub_4 + 4);
    sort(sub_2, sub_2 + 2);
    
    int res = sub_4[3] + sub_4[2] + sub_4[1] + sub_2[1];
    cout << res;
}
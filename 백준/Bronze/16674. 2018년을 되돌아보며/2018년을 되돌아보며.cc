#include <iostream>
#include <string>

using namespace std;

int main(){
    string N;
    cin >> N;
    
    int count0 = 0, count1 = 0, count2 = 0, count8 = 0, other = 0;
    for(int i = 0; i < N.length(); i++){
        if(N[i] == '0') count0++;
        else if(N[i] == '1') count1++;
        else if(N[i] == '2') count2++;
        else if(N[i] == '8') count8++;
        else other++;
    }

    if(other >= 1) cout << 0;
    else if(count0 > 0 && count1 > 0 && count2 > 0 && count8 > 0){
        if(count0 == count1 && count1 == count2 && count2 == count8)
            cout << 8;
        else cout << 2;
    }
    else cout << 1;
}
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string wd1, wd2;
    cin >> wd1 >> wd2;
    
    int res1[26] = {0, };
    int res2[26] = {0, };
    for(int i = 0; i < wd1.length(); i++){
        res1[wd1[i] - 'a']++;
    }
    
    for(int i = 0; i < wd2.length(); i++){
        res2[wd2[i] - 'a']++;
    }
    
    int res = 0;
    for(int i = 0; i < 26; i++){
        if(res1[i] != res2[i])
            res += abs(res1[i] - res2[i]);
    }
    cout << res;
}
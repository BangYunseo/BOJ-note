#include <iostream>
#include<cmath>

using namespace std;

char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int main(){
    int r = 31;
    long long M = 1234567891;
    int L;
    int res = 0;
    string word;
    cin >> L;
    cin >> word;
    
    for(int i = 0; i < L; i++){
        for(int j = 0; j < 26; j++){
            if (word[i] == arr[j])
                res += (j + 1) * pow(r, i);
        }
    }
    cout << res;
}
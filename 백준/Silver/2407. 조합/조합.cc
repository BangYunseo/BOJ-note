#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string arr[101][101];

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 | j == i) arr[i][j] = "1";
            else{
                int res = 0;
                string temp1 = arr[i - 1][j];
                string temp2 = arr[i - 1][j - 1];

                while(!temp1.empty() || !temp2.empty() || res){
                    if(!temp1.empty()){
                        res += temp1.back() - '0';
                        temp1.pop_back();
                    }
                    if(!temp2.empty()){
                        res += temp2.back() - '0';
                        temp2.pop_back();
                    }
                    arr[i][j].push_back((res % 10) + '0');
                    res /= 10;
                }

                reverse(arr[i][j].begin(), arr[i][j].end());
            }
        }
    }
    cout << arr[n][m];
}
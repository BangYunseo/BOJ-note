#include <iostream>

using namespace std;

int H, M;
int main(){
    cin >> H >> M;
    int res = (H - 9) * 60;
    if(res < 0){
        res *= -1;
    }
    res += M;
    cout << res;
}
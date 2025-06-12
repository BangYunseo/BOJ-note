#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int L, P, V;
    int count = 1;
    while(true){
        cin >> L >> P >> V;
        if(L == 0 && P == 0 && V == 0) break;
        int num = V / P;
        cout << "Case " << count << ": " ;
        cout << (num * L) + min(L, (V % P)) << endl;
        count++;
    }
}
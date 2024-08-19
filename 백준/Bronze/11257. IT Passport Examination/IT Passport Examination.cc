#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    string ID;
    int sub1, sub2, sub3;
    for(int i = 0; i < T; i++){
        cin >> ID >> sub1 >> sub2 >> sub3;
        int temp = sub1 + sub2 + sub3;
        
        cout << ID << ' ' << temp;
        if((temp >= 55) && (sub1 >= 35 * 0.3)
                        && (sub2 >= 25 * 0.3)
                        && (sub3 >= 40 * 0.3)) cout << " PASS\n";
        else cout << " FAIL\n";
    }
}
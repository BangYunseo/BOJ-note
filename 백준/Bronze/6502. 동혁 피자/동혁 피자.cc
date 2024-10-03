#include <iostream>

using namespace std;

int main(){
    int w, r, l, count = 1;
    
    while(true){
        cin >> r >> w >> l;
        if(r == 0 || w == 0 || l == 0) break;

        cout << "Pizza " << count;
        if(w * w + l * l <= 4 * r * r) cout << " fits on the table.";
        else cout << " does not fit on the table.";
        cout << endl;
        count++;
    }
}
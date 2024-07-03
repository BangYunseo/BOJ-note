#include <iostream>

using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    
    int X, Y;
    int m = 0, nm = 0, total = 0, se = 0;

    for(int i = 0; i < 10; i++){
        cin >> X >> Y;
        for(int j = 0; j < X + Y; j++){
            if(j == 6) break;
            else if(j >= X) nm += 3;
            else m += 3;
        }

        se++;
        total = m + nm;

        if((A + m >= 66) && (B + total >= 130)){
            cout << "Nice" << endl;
            break;
        }

        if(N + se == 8){
            cout << "Nae ga wae" << endl;
            break;
        }
    }
}
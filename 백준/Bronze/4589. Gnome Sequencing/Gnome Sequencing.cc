#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int temp1, temp2, temp3;
    cout << "Gnomes:\n";
    for(int i = 0; i < N; i++){
        cin >> temp1 >> temp2 >> temp3;
        
        if((temp1 < temp2 && temp2 < temp3) || (temp1 > temp2 && temp2 > temp3))
            cout << "Ordered\n";
        else cout << "Unordered\n";
    }
}
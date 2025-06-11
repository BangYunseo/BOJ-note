#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    if(N == 1){
        cout << '*';
    } else {
        string firstRes = "", secondRes = "";
        for(int i = 0; i < N; i++){
            if(i % 2 == 0){
                firstRes += "*";
                secondRes += " ";
            } else {
                firstRes += " ";
                secondRes += "*";
            }
        }
        for(int i = 0; i < N; i++){
            cout << firstRes << '\n' << secondRes << '\n';
        }
    }
}
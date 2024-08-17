#include <iostream>
#include <string>

using namespace std;

int main(){
    string A;
    char B;
    cin >> A;
    
    while(true){
        cin >> B;
        char temp;
        if(cin.eof()) break;
        if('A' <= B &&  B <= 'Z') 
            temp = tolower(B);
        for(int i = 0; i < A.length(); i++){
            if(A[i] == B){
                A[i] = temp;
            }
        }
    }
    
    cout << A;
}
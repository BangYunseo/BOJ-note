#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    string temp;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        if(temp[temp.length() - 1] == '0' || 
           temp[temp.length() - 1] == '2' || 
           temp[temp.length() - 1] == '4' || 
           temp[temp.length() - 1] == '6' || 
           temp[temp.length() - 1] == '8') 
        { cout << "even\n"; }
        else { cout << "odd\n"; }
    }
}
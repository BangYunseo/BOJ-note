#include <iostream>

using namespace std;

pair<char, char> arr[26];
int N;

void preT(char temp){
    if(temp == '.') return;
    
    cout << temp;
    preT(arr[temp - 'A'].first);
    preT(arr[temp - 'A'].second);
}

void inT(char temp){
    if(temp == '.') return;
    
    inT(arr[temp - 'A'].first);
    cout << temp;
    inT(arr[temp - 'A'].second);
}

void posT(char temp){
    if(temp == '.') return;
    
    posT(arr[temp - 'A'].first);
    posT(arr[temp - 'A'].second);
    cout << temp;
}
int main(){
    cin >> N;
    
    char temp1, temp2, temp3;
    while(N--){
        cin >> temp1 >> temp2 >> temp3;
        arr[temp1 - 'A'].first = temp2;
        arr[temp1 - 'A'].second = temp3;
    }
    
    preT('A');
    cout << '\n';
    inT('A');
    cout << '\n';
    posT('A');
}
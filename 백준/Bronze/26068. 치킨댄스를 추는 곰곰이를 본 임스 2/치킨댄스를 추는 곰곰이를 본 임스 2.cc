#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int count = 0;
    string temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        
        int res = stoi(temp.substr(2));
        if(res <= 90) count++;
    }
    cout << count;
}
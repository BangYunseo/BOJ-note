#include <iostream>

using namespace std;

int main(){
    int N, kim, lim;
    cin >> N >> kim >> lim;
    
    int count = 0;
    while(kim != lim){
        kim = (kim + 1) / 2;
        lim = (lim + 1) / 2;
        count++;
    }
    
    cout << count;
}
#include <iostream>

using namespace std;

int count = 1;
long long int A, B;

void bfs(int A, int B){
    while(true){
        if(A == B) break;
        else if(A > B){
            count = -1;
            break;
        }
        
        if(B % 2 == 0) B /= 2;
        else if(B % 10 == 1) B = (B - 1) / 10; 
        else { 
            count = -1;
            break;
        }
        count++;
    }
}

int main(){
    cin >> A >> B;
    
    bfs(A, B);
    
    cout << count;
}
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, sum = 1, count = 1, p1 = 1, p2 = 1;
    cin >> N;
    while(p2 != N){
        if(sum == N){
            count++, p2++;
            sum += p2;
        } else if(sum > N){
            sum -= p1;
            p1++;
        } else{
            p2++;
            sum += p2;
        }
    }
    cout << count;
}
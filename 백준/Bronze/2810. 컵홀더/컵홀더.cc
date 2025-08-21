#include <iostream>

using namespace std;

int main(){
    int N, res = 1;
    cin >> N;
    
    string seat;
    cin >> seat;
    for(int i = 0; i < N; i++)
    {
        if(res >= N) break;
        else 
        {
            if(seat[i] == 'S') res++;
            else if(seat[i] == 'L') 
            {
                res++;
                i++;
            }
        }
    }
    cout << res;
}
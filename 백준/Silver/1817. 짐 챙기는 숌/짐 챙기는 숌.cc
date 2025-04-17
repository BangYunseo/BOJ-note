#include <iostream>

using namespace std;

int main(){
    int N, M, temp_size, temp_sum = 0, box_count = 0; 
    cin >> N >> M;

    if (N == 0) cout << 0;
    else {
        for(int i = 0; i < N; i++){
            cin >> temp_size;
            temp_sum += temp_size;
            if(temp_sum == M){
                box_count++;
                temp_sum = 0;
            } else if(temp_sum > M){
                box_count++;
                temp_sum = temp_size;
            }
        }

        if (temp_sum != 0) cout << box_count + 1;
        else cout << box_count;
    }
}
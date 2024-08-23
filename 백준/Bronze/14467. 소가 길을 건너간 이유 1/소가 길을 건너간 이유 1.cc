#include <iostream>

using namespace std;

int main(){
    int N; cin >> N;
    
    int cow[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int cow_num, cow_location, count = 0;
    for(int i = 0; i < N; i++){
        cin >> cow_num >> cow_location;
        if(cow[cow_num] == -1){
            cow[cow_num] = cow_location;
        }
        else if(cow[cow_num] != cow_location){
            cow[cow_num] = cow_location;
            count++;
        } 
    }
    cout << count;
}
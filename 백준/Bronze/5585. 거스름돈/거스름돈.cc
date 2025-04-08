#include <iostream>

using namespace std;

int main(){
    int price;
    cin >> price;

    int fee = 1000 - price;
    int count = 0;

    int fee_count[6] = {500, 100, 50, 10, 5, 1};
    for(int i = 0; i < 6; i++){
        count += fee / fee_count[i];
        fee %= fee_count[i];
    }

    cout << count;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> card(21);
    for(int i = 0; i <= 20; i++)
    {
        card[i] = i;
    }
    
    int a, b;
    for(int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        reverse(card.begin() + a, card.begin() + b + 1);
    }
    
    for(int i = 1; i <= 20; i++)
    {
        cout << card[i] << ' ';
    }
}
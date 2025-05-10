#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    double N, tempDrink;
    cin >> N;
    
    vector<double> energyDrink;
    for(int i = 0; i < N; i++){
        cin >> tempDrink;
        energyDrink.push_back(tempDrink);
    }
    
    sort(energyDrink.begin(), energyDrink.end());
    double totalDrink = energyDrink[N - 1];
    for(int i = 0; i < N - 1; i++){
        totalDrink  += (energyDrink[i] / 2);
    }
    
    cout << totalDrink;
}
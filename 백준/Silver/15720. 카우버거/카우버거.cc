#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b){
    return a > b;
}
int main(){
    int B, D, C;
    cin >> B >> C >> D;
    
    int res = 0;
    vector<int> Buger(B);
    vector<int> Side(C);
    vector<int> Drink(D);
    
    for(int i = 0; i < B; i++) {
        cin >> Buger[i];
        res += Buger[i];
    }
    for(int i = 0; i < C; i++){
        cin >> Side[i];
        res += Side[i];
    }
    for(int i = 0; i < D; i++){
        cin >> Drink[i];
        res += Drink[i];
    }
    sort(Buger.begin(), Buger.end(), comp);
    sort(Side.begin(), Side.end(), comp);
    sort(Drink.begin(), Drink.end(), comp);
    
    int minValue = min({B, C, D});
    int res_Sale = 0;
    
    for(int i = 0; i < minValue; i++){
        int price = (Buger[i] + Side[i] + Drink[i]) * 0.9;
        res_Sale += price;
    }
    
    if(minValue < B) for(int i = minValue; i < B; i++) res_Sale += Buger[i];
    if(minValue < C) for(int i = minValue; i < C; i++) res_Sale += Side[i];
    if(minValue < D) for(int i = minValue; i < D; i++) res_Sale += Drink[i];
    
    cout << res << endl << res_Sale;
}
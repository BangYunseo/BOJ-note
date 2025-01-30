#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N, M, chicken, ans;
int map[51][51];
bool sel[13];

vector<pair<int, int>> home, chick, V;

int Min(int a, int b){
    if(a < b) return a;
    return b;
}

void Input(){
    ans = 98765432;
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> map[i][j];
            
            if(map[i][j] == 1)
                home.push_back(make_pair(i, j));
            
            if(map[i][j] == 2)
                chick.push_back(make_pair(i, j));
        }
    }
    chicken = chick.size();
}

int CalDis(){
    int sum = 0;
    for(int i = 0; i < home.size(); i++){
        int x = home[i].first;
        int y = home[i].second;
        int d = 98765432;
        
        for(int j = 0; j < V.size(); j++){
            int xx = V[j].first;
            int yy = V[j].second;
            int DD = abs(xx - x) + abs(yy - y);
            
            d = Min(d, DD);
        }
        sum = sum + d;
    }
    return sum;
}

void SelChick(int index, int count){
    if(count == M){
        ans = Min(ans, CalDis());
        return;
    }
    
    for(int i = index; i < chicken; i++){
        if(sel[i] == true) continue;
        sel[i] = true;
        V.push_back(chick[i]);
        SelChick(i + 1, count + 1);
        sel[i] = false;
        V.pop_back();
    }
}

void Sol(){
    SelChick(0, 0);
    cout << ans << '\n';
}

void Solve(){
    Input();
    Sol();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Solve();
}
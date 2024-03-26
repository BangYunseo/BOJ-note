#include <iostream>
#include <map>

using namespace std;

int N, M;
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> N >> M;
    map<string, string> m;
    string a, b;
    
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        m[a] = b;
    }
    for(int i = 0; i < M; i++){
        cin >> a;
        cout << m[a] << "\n";
    }
}
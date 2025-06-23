#include <iostream>
#include <vector>

using namespace std;

int N, M;
int arr[1000001];

int findSet(int n){
    if(arr[n] == n) return n;
    return arr[n] = findSet(arr[n]);
}

void unionSet(int a, int b){
    a = findSet(a);
    b = findSet(b);
    
    if(a != b) arr[a] = b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    for(int i = 0; i <= N; i++)
        arr[i] = i;
    
    int sol, a, b;
    for(int i = 0; i < M; i++) {
        cin >> sol >> a >> b;
        if(sol == 0) {
            unionSet(a, b);
        } else {
            if(findSet(a) == findSet(b)){
                cout << "YES";
            } else cout << "NO"; 
            cout << '\n';
        }
    }
}
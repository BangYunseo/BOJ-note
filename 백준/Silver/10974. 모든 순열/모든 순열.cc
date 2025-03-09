#include <iostream>

using namespace std;

int N;
int arr[8];
bool visited[8];

void search(int count){
    if(count == N){
        for(int i = 0; i < N; i++) 
            cout << arr[i] + 1 << ' ';
        cout << '\n';
        
        return ;
    }
    
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            arr[count] = i;
            visited[i] = true;
            
            search(count + 1);
            
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    search(0);
}
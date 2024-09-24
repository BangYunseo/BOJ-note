#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, U, D;
    cin >> N;

    string word = "";
    vector<int> arr(N);
    
    for(int i = 0; i < N; i++) cin >> arr[i];
    cin >> U >> D;
    
    for(int i = 0; i < N; i++){
        if(arr[i] == 1){
            if(U > 0){
                U--; 
                word += 'U';
            }
            else{
                cout << "NO";
                return 0;
            }
        } else if(arr[i] == 2){
            if(D > 0){
                D--;
                word += 'D';
            }
            else{
                cout << "NO";
                return 0;
            }
        } else if(arr[i] == 3){
            if(U > 0){
                U--;
                word += 'U';
            }
            else if(D > 0){
                D--;
                word += 'D';
            }
        }
    }
    if(U == 0 && D == 0) cout << "YES\n" << word;
    else cout << "NO";
}
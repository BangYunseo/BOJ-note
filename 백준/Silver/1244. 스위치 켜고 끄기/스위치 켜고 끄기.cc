#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> st(101);
    for(int i = 1; i <= N; i++){
        cin >> st[i];
    }
    
    int T;
    cin >> T;
    
    int sel, index;
    for(int i = 0; i < T; i++){
        cin >> sel >> index;
        if(sel == 1){
            for(int j = index; j <= N; j += index){
                st[j] = !st[j];
            }
        } else if(sel == 2){
            st[index] = !st[index];

            for(int j = 1; st[index + j] == st[index - j]; j++){
                if(index + j > N || index - j < 1)
                    break;
                st[index + j] = !st[index + j];
                st[index - j] = !st[index - j];
            }
        }
    }

    for(int i = 1; i <= N; i++){
        cout << st[i] << ' ';
        if(i % 20 == 0)
            cout << endl;
    }
}
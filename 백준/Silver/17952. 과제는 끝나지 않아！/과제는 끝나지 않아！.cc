#include <iostream>
#include <vector>

using namespace std;

int N;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    
    cin >> N;
    
    int ch, A, T, sum = 0;
    vector<pair<int, int>> todo;
    while(N--){
        cin >> ch;
        if(ch == 1){
            cin >> A >> T;
            todo.push_back(make_pair(A, T));
        } 
        
        if(!todo.empty()){
            todo.back().second--;
            if(todo.back().second == 0){
                sum += todo.back().first;
                todo.pop_back();
            }
        }
    } 
    cout << sum;
}
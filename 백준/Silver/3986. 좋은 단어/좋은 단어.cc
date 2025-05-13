#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    
    int N, count = 0;
    cin >> N;
    
    string word;
    
    while(N--){
        cin >> word;
        
        stack<char> listAB;
        for(int i = 0; i < word.length(); i++){
            if(!listAB.empty() && listAB.top() == word[i]) 
                listAB.pop();
            else 
                listAB.push(word[i]);
        }

        if(listAB.empty()){
            count++;
        }
    }
    cout << count;
}
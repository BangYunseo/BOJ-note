#include <iostream>
#include <stack>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    
    stack<string> set;
    string check;
    
    for(int i = 0; i < N; i++){
        getline(cin, check);
        int index = 0;
        
        for(int j = 0; j < check.length(); j++){
            if(check[j] == ' '){
                string temp = check.substr(index, j - index);
                set.push(temp);
                index = j + 1;
            } else if(j == check.length() - 1)
                set.push(check.substr(index));
        }

        cout << "Case #" << i + 1 << ": "; 
        while(!set.empty()){
            cout << set.top() << ' ';
            set.pop();
        }
        cout << endl;
    }    
}
#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

int N;
string temp_string;
map<string, int> bookList;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    while(N--){
        string temp_string, temp_extension;
        cin >> temp_string;
        for(int i = 0; i < temp_string.length(); i++){
            if(temp_string[i] == '.'){
                temp_extension = temp_string.substr(i + 1);
                bookList[temp_extension]++;
                continue;
            }
        }
    }
    
    for(const auto& value : bookList){
        cout << value.first << ' ' << value.second << "\n";
    }
}
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int N, index, indexF, indexL;
    string res, temp;
    cin >> N >> res;

    for(index = 0; index < res.length(); index++){
        if(res[index] == '*'){
            indexF = index;
            indexL = res.length() - index - 1;
        }
    }
    for(int i = 1; i <= N; i++){
        cin >> temp;
        if(res.length() - 1 <= temp.length()&&
            res.substr(0, indexF) == temp.substr(0, indexF) &&
            res.substr(res.size() - indexL) == temp.substr(temp.size() - indexL))
            cout << "DA";
        else cout << "NE";
        cout << '\n';
    }
}
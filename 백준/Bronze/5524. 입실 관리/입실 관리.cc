#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int N;
    cin >> N;

    string name;
    for(int i = 0; i < N; i++){
        cin >> name;
        for(int j = 0; j < name.length(); j++){
            if(name[j] >= 'A' && name[j] <= 'Z'){
                name[j] = tolower(name[j]);
            }
        }
        cout << name << endl;
    }
}
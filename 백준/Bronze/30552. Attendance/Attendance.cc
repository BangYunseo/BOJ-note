#include <iostream>
#include <vector>

using namespace std;

vector<string> arr;
int main(){
    int N;
    cin >> N;

    string word;
    for(int i = 0; i < N; i++){
        cin >> word;
        if(word == "Present!"){
            arr.pop_back();
        }
        else{
            arr.push_back(word);
        }
    }

    if(arr.size() == 0){
        cout << "No Absences";
    }
    else{
        for(int i = 0; i < arr.size(); i++){
            cout << arr[i] << endl;
        }
    }
}
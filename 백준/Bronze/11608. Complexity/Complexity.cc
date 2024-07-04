#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string word;
    cin >> word;
    
    int arr[26] = {0, }, count = 0;   
    for(int i = 0; i < word.length(); i++){
        int temp = word[i] - 'a';
        if(arr[temp] == 0){
            arr[temp]++;
            count++;
        }
        else arr[temp]++;
    }

    sort(arr, arr + 26);
    int sum = 0;
    for(int i = 0; i < 24; i++) sum += arr[i];
    cout << sum;
}
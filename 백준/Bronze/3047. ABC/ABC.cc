#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> arr(3);
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    string word;
    cin >> word;
    
    for(int i = 0; i < word.length(); i++)
    {
        if(word[i] == 'A')
            cout << arr[0];
        else if(word[i] == 'B')
            cout << arr[1];
        else cout << arr[2];
        cout << ' ';
    }
}
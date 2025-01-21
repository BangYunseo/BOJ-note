#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1, word2;
int arr[1001][1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> word1 >> word2;
    
    for(int i = 1; i <= word1.length(); i++){
        for(int j = 1; j <= word2.length(); j++){
            if(word1[i - 1] == word2[j - 1]) arr[i][j] = arr[i - 1][j - 1] + 1;
            else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
        }
    }
    
    cout << arr[word1.length()][word2.length()];
}
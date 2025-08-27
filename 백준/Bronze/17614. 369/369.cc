#include <iostream>
#include <cstring>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, count = 0;
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        string word = to_string(i);
        for(int j = 0; j <= word.length(); j++)
        {
            if(word[j] == '3' || word[j] == '6' || word[j] == '9')
            {
                count++;
            }
        }
    }
    cout << count;
}
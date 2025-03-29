#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int N, M;

bool compare(const pair<string, int> &a, const pair<string, int> &b){
    if(a.second != b.second) return a.second > b.second;
    // 빈도 내림차순
    
    if(a.first.length() != b.first.length()) 
        return a.first.length() > b.first.length();
    //길이 오름차순
    
    return a.first < b.first;
    // 사전 오름차순
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    
    string word_temp;
    map<string, int> wordBook;
    
    for(int i = 0; i < N; i++){
        cin >> word_temp;
        if(word_temp.length() >= M)
            wordBook[word_temp]++;
    }
    
    // map -> vector 변환
    vector<pair<string, int>> Word(wordBook.begin(), wordBook.end());

    sort(Word.begin(), Word.end(), compare);
    
    for(auto &a : Word) 
        cout << a.first << "\n";
}
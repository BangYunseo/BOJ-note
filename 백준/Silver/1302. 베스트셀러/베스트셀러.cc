#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b){
    if(a.second != b.second) return a.second > b.second;
    // 책의 개수 순 정렬
    
    return a.first < b.first;
    // 사전 순 정렬
}

int main(){
    int N;
    cin >> N;
    
    vector<pair<string, int>> bookList;
    string book;
    
    while(N--){
        cin >> book;
        bool found = false;
        
        for(int i = 0; i < size(bookList); i++){
            if(bookList[i].first == book){
                bookList[i].second++;
                found = true;
                break;
            }
        }
        
        if(!found) bookList.push_back(make_pair(book, 1));
    }

    sort(bookList.begin(), bookList.end(), compare);
    cout << bookList[0].first;
}
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int N;
vector<vector<int>> paper;
map<int, int> paperMap;

bool checking(int x, int y, int size){
    int firstV = paper[x][y];
    for(int i = x; i < x + size; i++){
        for(int j = y; j < y + size; j++){
            if(paper[i][j] != firstV){
                return false;
            }
        }
    }
    return true;
}

void func(int a, int b, int size){
    if(checking(a, b, size)){
        paperMap[paper[a][b]]++;
        return;
    }
    
    int newSize = size / 3;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            func(a + i * newSize, b + j * newSize, newSize);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    paper.resize(N, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> paper[i][j];
        }
    }
    
    func(0, 0, N);
    cout << paperMap[-1] << '\n' << paperMap[0] << '\n' << paperMap[1];
    
}
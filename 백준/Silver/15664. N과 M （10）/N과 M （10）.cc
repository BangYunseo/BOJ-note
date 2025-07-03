#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int arr[8];
vector<int> list;
bool visited[8] = {false, };

void search(int index, int countV){
    if(countV == M)
    {
        for(int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return ;
    }
    
    int temp = 0;
    for(int i = index; i < list.size(); i++)
    {
        if(!visited[i] && list[i] != temp)
        {
            visited[i] = true;
            arr[countV] = list[i];
            temp = arr[countV];
            search(i, countV + 1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N >> M;

    list.resize(N);
    
    for(int i = 0; i < N; i++)
    {
        cin >> list[i];
    }
    
    sort(list.begin(), list.end());
    
    search(0, 0);
    return 0;
}
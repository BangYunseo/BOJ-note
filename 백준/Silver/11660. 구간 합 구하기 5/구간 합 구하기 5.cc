#include <iostream>

using namespace std;

int N, M;
int arr[1025][1025];
int addarr[1025][1025];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M; 
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> arr[i][j];
            addarr[i][j] = arr[i][j]
                + (i > 1 ? addarr[i - 1][j] : 0)
                + (j > 1 ? addarr[i][j - 1] : 0)
                - (i > 1 && j > 1 ? addarr[i - 1][j - 1] : 0);
        }
    }
    
    int x1, x2, y1, y2;
    while(M--){
        cin >> x1 >> y1 >> x2 >> y2;
        int res = addarr[x2][y2] 
            - (x1 > 1 ? addarr[x1 - 1][y2] : 0)
            - (y1 > 1 ? addarr[x2][y1 - 1] : 0)
            + (x1 > 1 && y1 > 1 ? addarr[x1 - 1][y1 - 1] : 0);  
        cout << res <<'\n';
    }
}
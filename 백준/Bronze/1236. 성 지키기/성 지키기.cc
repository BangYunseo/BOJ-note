#include <iostream>
#include <algorithm>

using namespace std;

int N, M, cnt;
char arr[51][51];   

void counting() {
    int cnt1 = 0, cnt2 = 0;
    
    for(int i = 1; i <= N; i++) 
    {
        bool check1 = false;
        for(int j = 1; j <= M; j++) 
        {
            if(arr[i][j] == 'X')
            {
                check1 = true;
                break;
            }
        }
        if(!check1)
        {
            cnt1++;
        }
	}

    for(int i = 1; i <= M; i++) 
    {
        bool check2 = false;
        for(int j = 1; j <= N; j++) 
        {
            if(arr[j][i] == 'X')
            {
                check2 = true;
                break;
            }
        }
        if(!check2)
        {
            cnt2++;
        }
	}

    cnt = max(cnt1, cnt2);
}

int main() {
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
        }
    }
    counting();
    cout << cnt;
}
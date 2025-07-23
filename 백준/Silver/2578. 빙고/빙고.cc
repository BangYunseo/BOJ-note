#include <iostream>

using namespace std;

int ans[6][6];
pair<int, int> bin[26];

bool bingo(){
    int cnt = 0, cntR = 0, cntL = 0;
    
    for(int i = 1; i <= 5; i++)
    {
        int col = 0, row = 0;
        for(int j = 1; j <= 5; j++)
        {
            if(ans[i][j] == 0)
            {
                row++;
            }
            if(ans[j][i] == 0)
            {
                col++;
            }
        }
        
        if(col == 5)
        {
            cnt++;
        }
        if(row == 5)
        {
            cnt++;
        }
        if(ans[i][i] == 0)
        {
            cntR++;
        }
        if(ans[i][5 - i + 1] == 0)
        {
            cntL++;
        }
    }
    
    if(cntR == 5)
    {
        cnt++;
    }
    if(cntL == 5)
    {
        cnt++;
    }
    if(cnt >= 3)
    {
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cin >> ans[i][j];
            bin[ans[i][j]] = {i, j};
        }
    }
    
    int num, res = 0;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            res++;
            cin >> num;
            
            ans[bin[num].first][bin[num].second] = 0;
            // 입력받은 값을 0으로 전환
            
            if(i >= 3)
            {
                if(bingo())
                {
                    cout << res;
                    return 0;
                }
            }
        }
    }
    return 0;
}
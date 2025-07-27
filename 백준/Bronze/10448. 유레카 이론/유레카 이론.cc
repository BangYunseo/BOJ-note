#include <iostream>
#include <vector>

using namespace std;

int ans[1001];

bool checkT(int a){
    
    for(int i = 1; i < 50; i++)
    {
        for(int j = 1; j < 50; j++)
        {
            for(int k = 1; k < 50; k++)
            {
                if(ans[i] + ans[j] + ans[k] == a)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    int n, K;
    cin >> K;
    
    for(int i = 1; i <= 1000; i++)
    {
        ans[i] = ans[i - 1] + i;
    }
    
    for(int i = 0; i < K; i++)
    {
        int temp;
        cin >> temp;
        if(checkT(temp))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
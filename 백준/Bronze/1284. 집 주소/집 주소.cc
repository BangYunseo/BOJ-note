#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string N;
    
    while(true)
    {
        cin >> N;
        if(N == "0") 
            break;
        
        int res = 2 + N.length() - 1;
        for(int i = 0; i < N.length(); i++)
        {
            if(N[i] == '1') 
                res += 2;
            else if(N[i] == '0') 
                res += 4;
            else 
                res += 3;
        }
    
        cout << res << endl;
    }
}
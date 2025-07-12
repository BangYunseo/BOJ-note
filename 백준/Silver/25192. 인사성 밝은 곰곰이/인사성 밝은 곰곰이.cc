#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, count = 0;
    cin >> N;
    
    string temp;
    bool checking = false;
    set<string> nameList;
    
    while(N--)
    {
        cin >> temp;
        
        if(temp == "ENTER")
        {
            checking = true;
            nameList.clear();
        }
        else if(checking)
        {
            pair<set<string>::iterator, bool> res = nameList.insert(temp);
            if(res.second)
            {
                count++;
            }
        }
    }
    cout << count;
}
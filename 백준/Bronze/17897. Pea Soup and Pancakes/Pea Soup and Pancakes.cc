#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    string res = "Anywhere is fine I guess";    
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;

        cin.ignore();
        string store, menu;
        bool pea = false, pan = false;
        getline(cin, store);
        for(int j = 0; j < k; j++){
            getline(cin, menu);
            if(menu == "pea soup") pea = true;
            else if(menu == "pancakes") pan = true;
        }
        
        if((pea == true) && (pan == true)){
            res = store;
            break;
        }
    }
    
    cout << res;
}
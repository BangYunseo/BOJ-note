#include <iostream>

using namespace std;

int n, p, price = 0, resprice;
string name = "", resname;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p;
        resprice = 0;
        resname = "";
        for(int j = 0; j < p; j++){
            cin >> price >> name;
            if(price > resprice){
                resname = name;
                resprice = price;
            }
        }
        cout << resname << endl;
    }
}
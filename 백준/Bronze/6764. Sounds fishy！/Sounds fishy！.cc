#include <iostream>

using namespace std;

int main(){
    int dept_arr[4];
    bool asc = false, desc = false, same = false;
    cin >> dept_arr[0] >> dept_arr[1];
    
    if(dept_arr[1] > dept_arr[0]) asc = true;
    else if(dept_arr[1] == dept_arr[0]) same = true;
    else if(dept_arr[1] < dept_arr[0]) desc = true;
    
    for(int i = 2; i <= 3; i++){
        cin >> dept_arr[i];
        if(asc){
            if(dept_arr[i] <= dept_arr[i - 1]) asc = false;
        }
        else if(same){
            if(dept_arr[i] != dept_arr[i - 1]) same = false;
        }
        else if(desc){
            if(dept_arr[i] >= dept_arr[i - 1]) desc = false;
        }
    }

    if(asc) cout << "Fish Rising";
    else if(desc) cout << "Fish Diving";
    else if(same) cout << "Fish At Constant Depth";
    else cout << "No Fish";
}
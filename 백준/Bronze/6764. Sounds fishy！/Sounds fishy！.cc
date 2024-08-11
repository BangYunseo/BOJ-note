#include <iostream>

using namespace std;

int dept_arr[4];
int main(){
    for(int i = 0; i < 4; i++) cin >> dept_arr[i];
    
    if(dept_arr[0] > dept_arr[1] && dept_arr[1] > dept_arr[2] &&
      dept_arr[2] > dept_arr[3]) cout << "Fish Diving";
    else if(dept_arr[0] < dept_arr[1] && dept_arr[1] < dept_arr[2] &&
           dept_arr[2] < dept_arr[3]) cout << "Fish Rising";
    else if(dept_arr[0] == dept_arr[1] && dept_arr[1] == dept_arr[2] &&
           dept_arr[2] == dept_arr[3]) cout << "Fish At Constant Depth";
    else cout << "No Fish";
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string A, B; 
    vector<int> res_val;
    int count[26] = {3, 2, 1, 2, 3, 3,
                     2, 3, 3, 2, 2, 1, 
                     2, 2, 1, 2, 2, 2, 
                     1, 2, 1, 1, 1, 2, 
                     2, 1};
    cin >> A >> B;
    int temp;
    for(int i = 0; i < A.length(); i++){
        temp = count[A[i] - 'A'];
        res_val.push_back(temp);
        temp = count[B[i] - 'A'];
        res_val.push_back(temp);
    }

    int temp2 = res_val.size();
    while(temp2 > 2){
        vector<int> arr;
        for(int i = 0; i < temp2 - 1; i++){
            temp = res_val[i] + res_val[i + 1]; 
            if(temp >= 10) 
                temp -= 10;
            arr.push_back(temp);
        }
        res_val = arr;
        temp2--;
    }
    cout << res_val[0] << res_val[1];
}
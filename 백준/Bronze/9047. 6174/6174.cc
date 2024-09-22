#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int T, max_temp, min_temp;
    cin >> T;
    
    string input; 
    char temp_input[4];
    for(int i = 0; i < T; i++){
        cin >> input;
        int res = stoi(input), count = 0;
        while(true){
            if(res == 6174){
                cout << count << endl;
                break;
            }
            for(int j = 0; j < 4; j++) temp_input[j] = input[j]; 
            sort(temp_input, temp_input + 4);
        
            max_temp = ((temp_input[3] - '0') * 1000) + 
                       ((temp_input[2] - '0') * 100) + 
                       ((temp_input[1] - '0') * 10) + 
                       (temp_input[0] - '0');
        
            min_temp = ((temp_input[0] - '0') * 1000) + 
                       ((temp_input[1] - '0') * 100) + 
                       ((temp_input[2] - '0') * 10) + 
                       (temp_input[3] - '0');
            
            res = max_temp - min_temp;  // 차이를 구해야 함
            input = to_string(res);
            while(input.length() < 4) input = '0' + input;  // 자릿수 맞추기
            count++;
       }
    }
}
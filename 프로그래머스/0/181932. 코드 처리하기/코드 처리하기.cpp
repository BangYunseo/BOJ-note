#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    int mode = 0;
    
    int len = code.length();
    
    for(int i = 0; i < len; i++){
        if(mode == 0)
        {
            if(code[i] != '1'){
                if(i % 2 == 0){
                    answer += code[i];
                }
            }
            else{
                mode = 1;
            }
        }
        
        else if(mode == 1)
        {
            if(code[i] != '1'){
                if(i % 2 != 0){
                    answer += code[i];
                }
            }
            else{
                mode = 0;
            }
        }
    }
    if (answer.empty())
        answer = "EMPTY";
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string evennum = "";
    string oddnum = "";
    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i] % 2 == 0) evennum += to_string(num_list[i]);
        else oddnum += to_string(num_list[i]);
    }
    answer = stoi(oddnum) + stoi(evennum);
    return answer;
}
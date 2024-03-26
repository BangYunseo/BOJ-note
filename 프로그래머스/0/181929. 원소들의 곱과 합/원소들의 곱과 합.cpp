#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mulres = 1;
    int addres = 0;
    for(int i = 0; i < num_list.size(); i++){
        mulres *= num_list[i];
        addres += num_list[i];
    }
    addres = addres * addres;
    
    if(mulres < addres) answer = 1;
    if(mulres > addres) answer = 0;
    return answer;
}
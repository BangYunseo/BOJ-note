#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string res1 = to_string(a) + to_string(b);
    int res2 = 2 * a * b;
    if (stoi(res1) >= res2)
        answer = stoi(res1);
    else
        answer = res2;
    return answer;
}
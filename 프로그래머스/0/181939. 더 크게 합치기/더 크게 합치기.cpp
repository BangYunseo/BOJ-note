#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string res1 = to_string(a) + to_string(b);
    string res2 = to_string(b) + to_string(a);
    
    if (stoi(res1) >= stoi(res2))
        return stoi(res1);
    else
        return stoi(res2);
}
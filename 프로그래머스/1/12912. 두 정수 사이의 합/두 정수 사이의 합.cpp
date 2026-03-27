#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    for(int i = min(a, b); i <= max(a, b); i++)
    {
        answer += i;
    }
    
    return answer;
}

int main()
{
    int x, y;
    cin >> x, y;
    cout << solution(x, y);
}
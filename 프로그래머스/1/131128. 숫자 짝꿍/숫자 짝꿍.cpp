#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> arrX(10, 0);
    vector<int> arrY(10, 0);
    
    for(int i=0; i < X.length(); i++) arrX[X[i] - '0']++;
    for(int j=0; j < Y.length(); j++) arrY[Y[j] - '0']++;
    
    for(int k=9; k >=0; k--)
    {
        int count = min(arrX[k], arrY[k]);
        for(int z=0; z < count; z++)
        {
            answer += k + '0';
        }
    }
    
    if(answer == "") answer = "-1";
    else if(answer[0] == '0') answer = "0";
    return answer;
}

int main()
{
    string X, Y;
    cin >> X >> Y;
    
    cout << solution(X, Y);
    return 0;
}
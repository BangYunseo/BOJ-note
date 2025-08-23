#include <iostream> 
#include <cmath>
#include <cstring>
#include <vector>

#define MAX 240000
using namespace std;

int main(){
    string A;
    int P;
    cin >> A >> P;

    vector<int> check(MAX, 0);
    vector<int> D;

    int num = stoi(A);
    D.push_back(num);
    check[num] = 1;

    int count = 1;
    while(true)
    {
        int num2 = 0;
        A = to_string(num);
        for(char c : A)
        {
            num2 += pow(c - '0', P);        
        }

        if(check[num2])
        {
            cout << check[num2] - 1;
            break;
        }

        check[num2] = ++count;
        D.push_back(num2);
        num = num2;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int temp, maxV =-1, i = N;
    vector<int> triangle;
    while(N--){
        cin >> temp;
        triangle.push_back(temp);
    }

    sort(triangle.begin(), triangle.end());
    
    for(int i = triangle.size() - 1; i >= 2; i--){
        if(triangle[i] < triangle[i - 1] + triangle[i - 2]) 
            maxV = max(maxV, triangle[i] + triangle[i - 1] + triangle[i - 2]);
    }

    cout << maxV;
}
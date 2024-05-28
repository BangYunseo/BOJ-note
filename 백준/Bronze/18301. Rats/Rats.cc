#include <iostream>

using namespace std;

int n1, n2, n12;
int main(){
    cin >> n1 >> n2 >> n12;
    int res = ((n1+1) * (n2+1) / (n12+1))-1;
    cout << res;
}
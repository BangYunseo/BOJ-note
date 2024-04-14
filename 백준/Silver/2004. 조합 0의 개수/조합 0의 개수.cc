#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

long long factorial(int a, int b){
    int num = 0;
    for(long long i = b; a / i >= 1; i *= b) num += a / i;
    return num;
}

int n, m;
int main(){
    cin >> n >> m;
    
    long long five = 0;
    long long two = 0;
    
    five = factorial(n, 5) - factorial(n - m, 5) - factorial(m, 5);
    two = factorial(n, 2) - factorial(n - m, 2) - factorial(m, 2);
    
    cout << min(five, two) << endl;
}
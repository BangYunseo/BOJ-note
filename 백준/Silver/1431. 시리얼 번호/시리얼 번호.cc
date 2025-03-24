#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int N;
string arr[51];

int sumDigit(const string &a){
    int sum = 0; 
    for(char word : a){
        if(isdigit(word)) 
            sum += word - '0';
    }
    return sum;
}

bool compare(const string &a, const string &b){
    int len_A = a.length();
    int len_B = b.length();

    int sum_A = sumDigit(a);
    int sum_B = sumDigit(b);
    
    if(len_A != len_B) 
        return len_A < len_B;

    if(sum_A != sum_B) 
        return sum_A < sum_B;

    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    string temp;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr, arr + N, compare);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << '\n';
    }
}
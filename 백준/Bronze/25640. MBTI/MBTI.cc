#include <iostream>
#include <string>

using namespace std;

int main(){
    string my_MBTI, any_MBTI;
    cin >> my_MBTI;
    
    int N, count = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> any_MBTI;
        if(my_MBTI == any_MBTI) 
            count++;
    }
    cout << count;
}
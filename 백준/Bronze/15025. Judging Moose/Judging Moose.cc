#include <iostream>

using namespace std;

int main(){
    int num_1, num_2;
    cin >> num_1 >> num_2;
    
    if(num_1 == 0 && num_2 == 0){
        cout << "Not a moose";
    } else if(num_1 == num_2){
        cout << "Even " << num_1 + num_2; 
    } else if(num_1 != num_2){
        int temp;
        if(num_1 > num_2) temp = num_1;
        else temp = num_2;
        cout << "Odd " << temp * 2;
    }
}
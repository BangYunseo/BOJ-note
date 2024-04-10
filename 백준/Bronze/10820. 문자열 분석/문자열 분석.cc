#include <iostream>

using namespace std;

char arr[101];
int tp1, tp2, tp3, tp4;
int main(){
    while(cin.getline(arr, 101)){
        tp1 = 0;
        tp2 = 0;
        tp3 = 0;
        tp4 = 0;
        for(int i = 0; i < sizeof(arr); i++){
            if((arr[i] >= 'A') && (arr[i] <= 'Z'))
                tp2++;
           else if((arr[i] >='a') && (arr[i] <= 'z'))
               tp1++;
           else if((arr[i] >= '0') && (arr[i] <= '9'))
               tp3++;
           else if(arr[i] == ' ')
               tp4++;
        }
        cout << tp1 << ' ';
        cout << tp2 << ' ';
        cout << tp3 << ' ';
        cout << tp4 << endl;
        fill_n(arr, 101, NULL);
    }
} 
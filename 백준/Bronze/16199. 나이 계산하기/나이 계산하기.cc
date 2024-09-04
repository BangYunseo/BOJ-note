#include <iostream>

using namespace std;

int main(){
    int Y_birth, M_birth, D_birth, Y_standard, M_standard, D_standard;
    cin >> Y_birth >> M_birth >> D_birth;
    cin >> Y_standard >> M_standard >> D_standard;
    
    int age1 = 0;
    if((M_birth < M_standard) || ((M_birth == M_standard) && (D_birth <= D_standard)))
        age1 = (Y_standard - Y_birth);
    else age1 = (Y_standard - Y_birth) - 1;
    int age2 = (Y_standard - Y_birth) + 1;
    int age3 = (Y_standard - Y_birth);
    cout << age1 << endl << age2 << endl << age3 << endl;
}
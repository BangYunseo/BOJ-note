#include <iostream>

using namespace std;

int main(){
    double height, weight, BMI_res;
    cin >> weight >> height;
    
    BMI_res = weight / (height * height);
    if(BMI_res >= 25){
        cout << "Overweight";
    }
    else if(BMI_res <= 25 && BMI_res >= 18.5){
        cout << "Normal weight";
    }
    else if(BMI_res <= 18.5){
        cout << "Underweight";
    }
}
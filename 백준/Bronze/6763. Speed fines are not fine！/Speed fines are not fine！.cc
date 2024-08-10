#include <iostream>

using namespace std;

int main(){
    int limit_speed, car_speed;
    cin >> limit_speed >> car_speed;
    
    if(limit_speed < car_speed){
        int temp = car_speed - limit_speed;
        cout << "You are speeding and your fine is $";
        if(temp >= 1 && temp <= 20){
            cout << "100.\n";
        } else if(temp >= 21 && temp <= 30){
            cout << "270.\n";
        } else if(temp >= 31){
            cout << "500.\n";
        }
    }
    else{
        cout << "Congratulations, you are within the speed limit!";
    }
}
#include <iostream>

using namespace std;

int PI;
int main(){
    cin >> PI;
    if((PI >= 620) && (PI <= 780)){
        cout << "Red";
    }
    else if((PI >= 590) && (PI < 620)){
        cout << "Orange";
    }
    else if((PI >= 570) && (PI < 590)){
        cout << "Yellow";
    }
    else if((PI >= 495) && (PI < 570)){
        cout << "Green";
    }
    else if((PI >= 450) && (PI < 495)){
        cout << "Blue";
    }
    else if((PI >= 425) && (PI < 450)){
        cout << "Indigo";
    }
    else if((PI >= 380) && (PI < 425)){
        cout << "Violet";
    }
}
#include <iostream>

using namespace std;

int main(){
    string grade = "";
    float val, res;
    float res1 = 0;
    float res2 = 0;
    string sub;
    for(int i = 0; i < 20; i++){
        cin >> sub >> val >> grade;
        if (grade == "A+"){
            res1 += val * 4.5;
            res2 += val;
        }
        else if(grade == "A0"){
            res1 += val * 4.0;
            res2 += val;
        }
        else if(grade == "B+"){
            res1 += val * 3.5;
            res2 += val;
        }
        else if(grade == "B0"){
            res1 += val * 3.0;
            res2 += val;
        }
        else if(grade == "C+"){
            res1 += val * 2.5;
            res2 += val;
        }
        else if(grade == "C0"){
            res1 += val * 2.0;
            res2 += val;
        }
        else if(grade == "D+"){
            res1 += val * 1.5;
            res2 += val;
        }
        else if(grade == "D0"){
            res1 += val * 1.0;
            res2 += val;
        }
        else if(grade == "F"){
            res1 += val * 0.0;
            res2 += val;
        }
        else if(grade == "P"){
            continue;
        }
    }
    if((res1 == 0) || (res2 == 0)){
        printf("%.6lf", 0.0f);
    }
    else{
        res = res1 / res2;
        printf("%.6lf", res);
    }
}
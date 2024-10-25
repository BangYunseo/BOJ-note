#include <iostream>
#include <string>

using namespace std;

string bus_name, in_num, out_num;
int Z, P, S;

int main(){
    while(true){
        cin >> bus_name >> Z;
        
        if(bus_name == "#" && Z == 0) 
            break;
        
        cin >> P >> S;
    
        for(int i = 0; i < S; i++){
            cin >> out_num >> in_num;
        
            int out = stoi(out_num);
            int in = stoi(in_num);

            P -= out;
            if (P < 0) P = 0;
        
            if(P + in <= Z) P += in;
            else if (P + in > Z) P = Z;
        }
        cout << bus_name << ' ' << P << endl;
    }
}
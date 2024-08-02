#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m, n;
    cin >> n >> m;
    
    string subject[n], fruit[n], color[n];
    string subject_temp, fruit_temp, color_temp;
    for(int i = 0; i < n; i++){
        cin >> subject_temp >> fruit_temp >> color_temp;
        subject[i] = subject_temp;
        fruit[i] = fruit_temp;
        color[i] = color_temp;
    }
    
    for(int i = 0; i < m; i++){
        int count = 0;
        cin >> subject_temp >> fruit_temp >> color_temp;
        for(int j = 0; j < n; j++){
            if((subject[j] == subject_temp) || (subject_temp == "-")){
                if((fruit[j] == fruit_temp) || (fruit_temp == "-")){
                    if((color[j] == color_temp) || (color_temp == "-")){
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
    }
}
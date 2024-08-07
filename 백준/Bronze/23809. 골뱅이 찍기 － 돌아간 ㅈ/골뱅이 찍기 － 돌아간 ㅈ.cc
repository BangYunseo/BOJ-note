#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        for(int j = 1; j <= 3 * N; j++){
            cout << ' ';
        }
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        cout << endl;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        for(int j = 1; j <= 2 * N; j++){
            cout << ' ';
        }
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        cout << endl;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= 3 * N; j++) cout << '@';        
        cout << endl;
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        for(int j = 1; j <= 2 * N; j++){
            cout << ' ';
        }
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        cout << endl;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        for(int j = 1; j <= 3 * N; j++){
            cout << ' ';
        }
        for(int j = 1; j <= N; j++){
            cout << '@';        
        }
        cout << endl;
    }
}
#include <iostream>
#include <cstring>

using namespace std;

int N;
int main() {
    cin >> N;

    for(int i = 0; i < N; i++){
        string a, b;
        cin >> a >> b;
        cout << "Distances: ";
        for(int j = 0; j < a.length(); j++){
            int temp = b[j] - a[j];
            if(temp < 0) temp += 26;
            cout << temp << ' ';
        }
        cout << endl;
    }
}
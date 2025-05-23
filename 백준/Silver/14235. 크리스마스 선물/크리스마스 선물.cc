#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, a, temp;
    cin >> n;

    priority_queue<int> bag;
    while(n--){
        cin >> a;
        if(a == 0){
            if(bag.empty()) cout << -1;
            else {
                cout << bag.top();
                bag.pop();
            }
            cout << '\n';
        } else{
            while(a--){
                cin >> temp;
                bag.push(temp);
            }
        }
    }
}
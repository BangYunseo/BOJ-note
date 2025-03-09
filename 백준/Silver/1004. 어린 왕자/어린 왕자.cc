#include <iostream>

using namespace std;

int T;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> T;
    
    int x1, x2, y1, y2, n, cx, cy, r;
    while(T--){
        int count = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        
        while(n--){
            cin >> cx >> cy >> r;
            
            if((cx - x1) * (cx - x1) + (cy - y1) * (cy - y1) < r * r)
                if ((cx - x2) * (cx - x2) + (cy - y2) * (cy - y2) > r * r)
                    count++;
            
            if((cx - x1) * (cx - x1) + (cy - y1) * (cy - y1) > r * r)
                if ((cx - x2) * (cx - x2) + (cy - y2) * (cy - y2) < r * r)
                    count++;
        }
        
        cout << count << '\n';
    }
}
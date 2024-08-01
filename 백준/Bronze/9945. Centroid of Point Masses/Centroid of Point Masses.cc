#include <iostream>

using namespace std;

int main(){
    int n, x, y, m, count = 1;
    while(true){
        cin >> n;
        double Mx = 0, My = 0, Mm = 0;
        if(n < 0)
            break;
        
        for(int i = 0; i < n; i++){
            cin >> x >> y >> m;
            Mx += x * m;
            My += y * m;
            Mm += m;
        }
        cout << "Case " << count << ": ";
        printf("%.2lf %.2lf\n", (Mx / Mm), (My / Mm));
        count++;
    }
}
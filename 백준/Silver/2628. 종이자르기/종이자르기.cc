#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int width, height;
    cin >> width >> height;
    
    vector<int> width1 = {0, width};
    vector<int> height1 = {0, height};
    
    int T, sel, loc;
    cin >> T;
    
    while(T--){
        cin >> sel >> loc;
        if(sel) width1.push_back(loc);
        else height1.push_back(loc);
    }
    
    sort(width1.begin(), width1.end());
    sort(height1.begin(), height1.end());
    
    vector<int> w, h;
    for(int i = 1; i < width1.size(); i++) w.push_back(width1[i] - width1[i - 1]);
    for(int i = 1; i < height1.size(); i++) h.push_back(height1[i] - height1[i - 1]);

    sort(w.begin(), w.end()); 
    sort(h.begin(), h.end());
    int res = w[w.size() - 1] * h[h.size() - 1];
    cout << res;
}
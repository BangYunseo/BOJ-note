#include <iostream>
#define MAX 150
using namespace std;

int h, w;

struct Rect {
    int h, w, diagonal;
    
    Rect(int h, int w, int diagonal){
        this->h = h;
        this->w = w;
        this->diagonal = diagonal;
    }
};

void sol(){
    int numCriteria = h * h + w * w;
    // 대각선 길이의 제곱 정의
    
    Rect curMinRect(100, 100, 100 * 100 + 100 * 100);
    // 현재 가장 작은 사각형 정의 : 가로 = 100
    //                          세로 = 100, 대각선의 제곱 설정
    
    for(int i = 1; i <= MAX; i++){ // 높이
        for(int j = i + 1; j <= MAX; j++){ // 넓이
            int curDiagonal = i * i + j * j;
            
            if(numCriteria > curDiagonal || 
               (numCriteria == curDiagonal && h >= i)){
                continue;
            }
            
            if(curDiagonal < curMinRect.diagonal || 
              (curDiagonal == curMinRect.diagonal &&
              i < curMinRect.h)){
                curMinRect.h = i;
                curMinRect.w = j;
                curMinRect.diagonal = curDiagonal;
            }
            break;
        }
        if(i * i >= numCriteria) break;
    }
    cout << curMinRect.h << ' ' << curMinRect.w << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(true){
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        sol();
    }
}
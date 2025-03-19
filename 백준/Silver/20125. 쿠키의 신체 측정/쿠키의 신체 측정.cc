#include <iostream>

using namespace std;

int N, loc_x, loc_y, arm_l = 0, arm_r = 0, leg_l = 0, leg_r = 0, waist = 0;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

char arr[1001][1001];

void searchHeart(int a, int b){
    int count = 0;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(arr[i][j] == '*'){
                count = 0;
                for(int z = 0; z < 4; z++){
                    int mx = i + dx[z];
                    int my = j + dy[z];
                    
                    if(mx >= 1 && mx <= N && my <= N && my >= 1 && arr[mx][my] == '*') 
                        count++;
                }

                if(count == 4){
                    loc_x = i;
                    loc_y = j;
                    return ;
                }
            }
        }
    }
}

void searchLength(int a, int b){
    for(int i = b - 1; i >= 1 && arr[a][i] == '*'; i--)
        arm_l++;
    
    for(int i = b + 1; i <= N && arr[a][i] == '*'; i++)
        arm_r++;
    
    for(int i = a + 1; i <= N && arr[i][b] == '*'; i++)
        waist++;
    
    for(int i = a + waist + 1; i <= N && arr[i][b - 1] == '*'; i++)
        leg_l++;
    
    for(int i = a + waist + 1; i <= N && arr[i][b + 1] == '*'; i++)
        leg_r++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    string temp;
    for(int i = 1; i <= N; i++){
    cin >> temp;
        for(int j = 1; j <= N; j++){
            arr[i][j] = temp[j - 1];
        }
    }

    searchHeart(1, 1);
    searchLength(loc_x, loc_y);

    cout << loc_x << ' ' << loc_y << '\n';
    cout << arm_l << ' ' << arm_r << ' ' << waist << ' ' << leg_l << ' ' << leg_r;
}
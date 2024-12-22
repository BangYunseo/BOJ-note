#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct student{
    string name;
    int kor, eng, math;
};

bool compare(student a, student b){
    if(a.kor == b.kor && a.eng == b.eng && a.math == b.math)
        return a.name < b.name;
    // 이름 오름차순
    
    if(a.kor == b.kor && a.eng == b.eng)
        return a.math > b.math;
    // 수학 내림차순
    
    if(a.kor == b.kor)
        return a.eng < b.eng;
    // 영어 오름차순
    
    return a.kor > b.kor;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<student> score(N);
    
    for(int i = 0; i < N; i++)
        cin >> score[i].name >> score[i].kor >> score[i].eng >> score[i].math;
    
    sort(score.begin(), score.end(), compare);
    
    for(int i = 0; i < N; i++) cout << score[i].name << '\n';
}
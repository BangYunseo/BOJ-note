#include <iostream>
#include <cstring>

using namespace std;

int timeToSec(string time){
    int min = stoi(time.substr(0, 2));
    int sec = stoi(time.substr(3, 2));
    return min * 60 + sec;
}

string secToTime(int totalTime){
    int min = totalTime / 60;
    int sec = totalTime % 60;
    string m = (min < 10 ? "0" : "") + to_string(min);
    string s = (sec < 10 ? "0" : "") + to_string(sec);
    return m + ":" + s;
}
int main(){
    int N;
    cin >> N;

    int score1 = 0, score2 = 0;
    int leadTime1 = 0, leadTime2 = 0;

    int prevTime = 0;

    string time;
    int team;
    for(int i = 0; i < N; i++){
        cin >> team >> time; 

        int curTime = timeToSec(time);

        if(score1 > score2)
            leadTime1 += curTime - prevTime;
        else if(score1 < score2)
            leadTime2 += curTime - prevTime;

        if(team == 1) score1++;
        else score2++;

        prevTime = curTime;
    }

    if(score1 > score2)
        leadTime1 += 2880 - prevTime;
    else if(score1 < score2)
        leadTime2 += 2880 - prevTime;

    cout << secToTime(leadTime1) << endl << secToTime(leadTime2);
    return 0;
}
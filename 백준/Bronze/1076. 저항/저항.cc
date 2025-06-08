#include <iostream>
#include <map>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    map<string, pair<char, long long>> colorList;
    
    colorList["black"] = {'0', 1};
    colorList["brown"] = {'1', 10};
    colorList["red"] = {'2', 100};
    colorList["orange"] = {'3', 1000};
    colorList["yellow"] = {'4', 10000};
    colorList["green"] = {'5', 100000};
    colorList["blue"] = {'6', 1000000};
    colorList["violet"] = {'7', 10000000};
    colorList["grey"] = {'8', 100000000};
    colorList["white"] = {'9', 1000000000};
    
    string word;
    long long res = 0;
    
    cin >> word;
    res += (colorList[word].first - '0') * 10;

    cin >> word;
    res += (colorList[word].first - '0');

    cin >> word;
    res *= colorList[word].second;
    
    cout << res;
}
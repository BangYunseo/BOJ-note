#include <iostream>
#include <algorithm>

using namespace std;

int N;

struct Person{
    string name;
    int day, month, year;

    bool operator<(const Person& other) const {
        if (year != other.year)
            return year < other.year;
        if (month != other.month)
            return month < other.month;
        return day < other.day;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;

    Person arr[101];
    for(int i = 0; i < N; i++){
        cin >> arr[i].name >> arr[i].day >> arr[i].month >> arr[i].year;
    }

    sort(arr, arr + N);
    
    cout << arr[N - 1].name << '\n';
    cout << arr[0].name;
}
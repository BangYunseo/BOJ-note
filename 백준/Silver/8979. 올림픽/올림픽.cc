#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct country{
    int ID_country;
    int num_Gold;
    int num_Silver;
    int num_Bronze;
    int score;
};

bool compare(struct country& a, struct country& b){
    if(a.num_Gold > b.num_Gold) return true;
    else if(a.num_Gold == b.num_Gold){
        if(a.num_Silver > b.num_Silver) 
            return true;
        else if(a.num_Silver == b.num_Silver) {
            if(a.num_Bronze > b.num_Bronze) 
                return true;
            else return false;
        }
        else return false;
    } 
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    
    vector<country> medals(N);
    
    for(int i = 0; i < N; i++){
        cin >> medals[i].ID_country 
            >> medals[i].num_Gold 
            >> medals[i].num_Silver 
            >> medals[i].num_Bronze;
    }

    sort(medals.begin(), medals.end(), compare);

    int res = 0;

    for(int i = 0; i < N; i++){
        res = 1;
        for(int j = 0; j < i; j++){
            if(medals[j].num_Gold == medals[i].num_Gold && 
                medals[j].num_Silver == medals[i].num_Silver &&
                medals[j].num_Bronze == medals[i].num_Bronze) continue;
            res++;
        }
        medals[i].score = res;
    }

    for(int i = 0; i < N; i++){
        if(medals[i].ID_country == K)
            cout << medals[i].score;
    }
}
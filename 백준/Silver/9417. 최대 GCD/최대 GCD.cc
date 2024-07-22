#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main(){
    int N;
    cin >> N;
    cin.ignore();
    
    int max;
    string word;
    for(int i = 0; i < N; i++){
        max = 0;
        vector<int> arr;
        getline(cin, word);
        
        string st;
        int curpos = 0;
        int pos = word.find(' ', curpos);
        
        while(pos != string::npos){
            st = word.substr(curpos, pos - curpos);
            arr.push_back(stoi(st));
            pos = word.find(' ', curpos);
            curpos = pos + 1;
        }
        for(int a = 0; a < arr.size() - 1; a++){
            for(int b = a + 1; b < arr.size(); b++){
                if(gcd(arr[a], arr[b]) > max)
                    max = gcd(arr[a], arr[b]);
            }
        }
        cout << max << endl;
    }
}
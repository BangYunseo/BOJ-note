#include <iostream>
#include <vector>

using namespace std;

string name;
vector<int> counting(26, 0);
char arr[51];

int main(){
    cin >> name;

    int size = name.size();
    for(int i = 0; i < size; i++) 
        counting[name[i] - 'A']++;

    int count = 0;
    
    for(int i = 0; i < 26; i++){
        if(counting[i] % 2 == 1){
            count++;
            arr[size / 2] = i + 'A';
            counting[i + 'A']--;
        }
    }

    if(count > 1) 
        cout << "I'm Sorry Hansoo";
    else{
        int l = 0;
        int r = size - 1;
        
        for(int i = 0; i < 26; i++){
            while(counting[i] > 1){
                arr[l++] = i + 'A';
                arr[r--] = i + 'A';
                counting[i] -= 2;
            }
        }

        for(int i = 0; i < size; i++) cout << arr[i];
    }
}
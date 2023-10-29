#include <stdio.h>
#include <string.h>

char Alphabet[1000005];
int Array[26];

int main(){
    int max = 0;
    int size;
    char answer;
    
    scanf("%s", Alphabet);
    size = strlen(Alphabet);
    
    for(int i = 0; i < size; i++){
        if(Alphabet[i] >= 'a')Array[Alphabet[i]-'a']++;
        else Array[Alphabet[i]-'A']++;
    }
    for(int i = 0; i < 26; i++){
        if(Array[i] == max)
            answer = '?';
        else if(Array[i] > max){
            max = Array[i];
            answer = 'A' + i;
        }
    }
    printf("%c", answer);
    return 0;
}
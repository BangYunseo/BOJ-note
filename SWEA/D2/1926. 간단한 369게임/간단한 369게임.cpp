
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
        int N;
        cin >> N;
        
        for(int i = 1; i <= N; i++)
        {
            // int count = 0;
            string str = to_string(i);
            string res = "";
            for(int j = 0; j < str.length(); j++)
            {
                if(str[j] =='3' || str[j] == '6' || str[j] == '9') res += '-';
            }
            
            if(res == "") cout << i;
            else cout << res;
            cout << ' ';
        }
	
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
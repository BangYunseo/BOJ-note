#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
    
	int T;
	cin>>T;
    
    int N;
    long long int P;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> P;
        int res = 0;
		for(int i = 1; i <= N; i++){
            res += i;
            if(res == P) res--;
        }
        cout << res << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
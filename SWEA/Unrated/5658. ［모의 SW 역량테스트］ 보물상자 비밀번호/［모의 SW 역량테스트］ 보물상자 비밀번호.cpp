/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int 변수 1개 입력받는 예제
// cin >> b >> c;                       // float 변수 2개 입력받는 예제 
// cin >> d >> e >> f;                  // double 변수 3개 입력받는 예제
// cin >> g;                            // char 변수 1개 입력받는 예제
// cin >> var;                          // 문자열 1개 입력받는 예제
// cin >> AB;                           // long long 변수 1개 입력받는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
// 표준 출력 예제
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int 변수 1개 출력하는 예제
// cout << b << " " << c;               // float 변수 2개 출력하는 예제
// cout << d << " " << e << " " << f;   // double 변수 3개 출력하는 예제
// cout << g;                           // char 변수 1개 출력하는 예제
// cout << var;                         // 문자열 1개 출력하는 예제
// cout << AB;                          // long long 변수 1개 출력하는 예제
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <functional>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int N, K;
        cin >> N >> K;
        
        string secretNum;
        cin >> secretNum;

        secretNum += secretNum;

        int len = N / 4;
        set<int, greater<int>> Keys;
        
		for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                int startIndex = i + (j * len);
                string tempStr = secretNum.substr(startIndex, len);
                int num = stoi(tempStr, nullptr, 16);

                Keys.insert(num);
            }
        }

        auto it = Keys.begin();
        for(int k = 0; k < K - 1; k++)
        {
            it++;
        }
        
        cout << '#' << test_case << ' ' << *it << endl;
	}
	return 0;
}
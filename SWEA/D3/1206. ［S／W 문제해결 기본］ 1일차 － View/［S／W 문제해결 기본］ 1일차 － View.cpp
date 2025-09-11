#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	int test_case;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        int N, arr[1001] = {0, }, res = 0;
        cin >> N;
        
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        
        for(int i = 2; i < N - 2; i++)
        {
            if(arr[i] > arr[i - 1] && arr[i] > arr[i - 2] && arr[i] > arr[i + 1] && arr[i] > arr[i + 2])
                res += (arr[i] - (max(max(arr[i - 1], arr[i - 2]), max(arr[i + 1], arr[i + 2]))));
        }
        
        cout << "#" << test_case << ' ' << res << endl;
        memset(arr, 0, sizeof(arr));
	}
	return 0;
}
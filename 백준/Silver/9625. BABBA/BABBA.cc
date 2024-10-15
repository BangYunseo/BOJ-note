#include <iostream>

using namespace std;

int main() {
    int K;
    cin >> K;
    
    int count_A = 0, count_B = 0;
    
    int prev_A = 0, prev_B = 1;  // word[1] = "B"
    int curr_A = 1, curr_B = 1;  // word[2] = "BA"

    for (int i = 3; i <= K; i++) {
        int next_A = curr_A + prev_A;
        int next_B = curr_B + prev_B;

        prev_A = curr_A;
        prev_B = curr_B;
        curr_A = next_A;
        curr_B = next_B;
    }

    if (K == 1) {
        count_B = 1;
    } else {
        count_A = curr_A;
        count_B = curr_B;
    }

    cout << count_A << ' ' << count_B;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int N, T;
        cin >> N;
        if (N == 0) break;
        cin >> T;

        vector<int> counts(N, 0);
        vector<int> players(N);
        for (int i = 0; i < N; ++i) {
            players[i] = i;
        }

        int currentPlayer = 0;
        while (true) {
            for (int i = 0; i < T; ++i) {
                counts[players[(currentPlayer + i) % players.size()]]++;
            }

            currentPlayer = (currentPlayer + T - 1) % players.size();
            players.erase(players.begin() + currentPlayer);

            if (players.size() == 1) {
                currentPlayer = 0;
            } else {
                currentPlayer %= players.size();
            }

            bool allEqual = true;
            for (int i = 1; i < players.size(); ++i) {
                if (counts[players[i]] != counts[players[0]]) {
                    allEqual = false;
                    break;
                }
            }

            if (allEqual) {
                cout << players.size() << " " << counts[players[0]] << "\n";
                break;
            }
        }
    }

    return 0;
}

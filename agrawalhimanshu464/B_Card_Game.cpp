#include <iostream>
#include <vector>
using namespace std;

int countWaysToWin(int a1, int a2, int b1, int b2) {
    int win_count = 0;

    // Try all permutations of rounds
    // (a1 vs b1), (a2 vs b2)
    // (a1 vs b2), (a2 vs b1)
    vector<vector<int>> scenarios = {
        {a1, a2, b1, b2},
        {a1, a2, b2, b1},
        {a2, a1, b1, b2},
        {a2, a1, b2, b1},
    };

    for (auto& scenario : scenarios) {
        int a_card1 = scenario[0];
        int a_card2 = scenario[1];
        int b_card1 = scenario[2];
        int b_card2 = scenario[3];

        int suneet_wins = 0;
        int slavic_wins = 0;

        // Round 1
        if (a_card1 > b_card1) suneet_wins++;
        else if (a_card1 < b_card1) slavic_wins++;

        // Round 2
        if (a_card2 > b_card2) suneet_wins++;
        else if (a_card2 < b_card2) slavic_wins++;

        if (suneet_wins > slavic_wins) {
            win_count++;
        }
    }

    return win_count;
}

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int result = countWaysToWin(a1, a2, b1, b2);
    cout << result << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

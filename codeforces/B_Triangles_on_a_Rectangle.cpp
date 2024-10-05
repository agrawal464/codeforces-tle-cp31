#include<bits/stdc++.h>
using namespace std;

void solve() {
    int w, h;
    cin >> w >> h;
    vector<int> x[4]; // Array of vectors to store the input

    for (int i = 0; i < 4; i++) {
        int X; // Read the size of the current group
        cin >> X;
        for (int j = 0; j < X; j++) {
            int t;
            cin >> t;
            x[i].push_back(t); // Corrected to use `i` instead of `k`
        }
    }

    // Calculate the width/height ranges
    long long w0 = x[0].back() - x[0][0]; 
    long long w1 = x[1].back() - x[1][0]; 
    long long w2 = x[2].back() - x[2][0]; 
    long long w3 = x[3].back() - x[3][0]; 

    // Output the maximum area that can be formed
    cout << max({w0 * h, w1 * h, w2 * w, w3 * w}) << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

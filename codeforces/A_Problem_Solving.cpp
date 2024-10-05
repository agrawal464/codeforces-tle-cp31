#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n; // Number of problems
        cin >> n;
        
        vector<int> difficulties(n);
        for (int i = 0; i < n; ++i) {
            cin >> difficulties[i];
        }
        
        // Find the maximum difficulty among the first n-1 problems
        int max_difficulty = *max_element(difficulties.begin(), difficulties.end() - 1);
        
        // Count how many times this max difficulty appears in the first n-1 problems
        int count_max = count(difficulties.begin(), difficulties.end() - 1, max_difficulty);
        
        // Check if the last problem is strictly harder
        if (max_difficulty < difficulties[n-1]) {
            cout << max_difficulty << endl;  // If the last problem is harder, Jane's skill is the max from first n-1
        } else {
            // Otherwise, if the max is not unique in the first n-1 problems, print Ambiguous
            if (count_max > 1) {
                cout << "Ambiguous" << endl;
            } else {
                cout << max_difficulty << endl;  // Otherwise, Jane's skill is the unique max from the first n-1
            }
        }
    }
}

int main() {
    solve();
    return 0;
}

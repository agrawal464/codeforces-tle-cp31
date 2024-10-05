#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> occ;


    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        int seat = arr[i];
        
        if (i == 0) {
            occ.insert(seat);
        } else {
            
            bool valid = (occ.count(seat - 1) > 0) || (occ.count(seat + 1) > 0);
            if (!valid) {
                cout << "NO" << endl;
                return;
            }
            occ.insert(seat);
        }
    }
        
    cout << "YES" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

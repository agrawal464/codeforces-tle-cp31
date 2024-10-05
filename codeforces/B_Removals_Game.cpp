#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    bool is_bob = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            is_bob = false;
            break;
        }
    }
    
    if (!is_bob) {
        reverse(a.begin(), a.end());
        is_bob = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                is_bob = false;
                break;
            }
        }
    }
    
    if (is_bob) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
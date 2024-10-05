#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int l = 0;
    while (l < n && arr[l] == 0) {
        l++;
    }

    
    int r = n - 1;
    while (r >= 0 && arr[r] == 0) {
        r--;
    }

   
    bool has_zero = false;
    for (int i = l; i <= r; i++) {
        if (arr[i] == 0) {
            has_zero = true;
            break;
        }
    }

    
    if (l >= n) {
        cout << 0 << endl;  
    } else if (has_zero) {
        cout << 2 << endl;  
        cout << 1 << endl;  
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

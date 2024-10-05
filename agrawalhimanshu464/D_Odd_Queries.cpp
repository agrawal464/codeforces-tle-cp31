#include<bits/stdc++.h>
using namespace std;

void solve(){
    long n, q;
    cin >> n >> q;
    vector<int> arr(n + 2, 0); // Add two extra elements to handle boundaries
    
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    for(int j = 1; j <= q; j++) {
        int l, r, k;
        cin >> l >> r >> k;

        // Calculate m with proper boundary checks
        int m = arr[l-1] + (r-l+1)*k + arr[r+1];

        // Check if m is odd or even
        if(m % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;        
        }
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
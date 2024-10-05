#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    if (arr[0] == arr[n-1]) {
        cout << "YES" << endl;
        return;
    }
    
    int min1 = arr[0];
    int max1 = arr[n-1];
    
    bool is_good = true;
    for (int i = 0; i < n-1; ++i) {
        if (arr[i] + arr[i+1] != min1 + max1) {
            is_good = false;
            break;
        }
    }
    
    if (is_good) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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

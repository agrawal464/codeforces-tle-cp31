#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool c = false;
    int i = 0, j = 0, k = 0;
    for (j = 1; j < n - 1; j++) {
        i = j - 1;
        k = j + 1;
        if (arr[j] > arr[i] && arr[j] > arr[k]) {
            c = true;
            break;
        }
    }

    if (c) {
        cout << "YES" << endl;
        cout << i + 1 << " " << j + 1 << " " << k + 1 << endl; 
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

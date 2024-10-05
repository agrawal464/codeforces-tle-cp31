#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int res = 0;  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        res = gcd(res, abs(arr[i] - (i + 1))); 
    }
    cout << res << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

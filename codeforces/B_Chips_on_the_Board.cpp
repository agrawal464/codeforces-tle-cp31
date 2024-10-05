#include<bits/stdc++.h>
using namespace std;

void solve() {
    long n;
    cin >> n;
    vector<long long> arr1(n), arr2(n);
    long long sum1 = 0, sum2 = 0;
    long long min1 = LLONG_MAX, min2 = LLONG_MAX;
    
    for(long i = 0; i < n; i++) {
        cin >> arr1[i];
        min1 = min(min1, arr1[i]);
        sum1 += arr1[i];
    }
    
    for(long i = 0; i < n; i++) {
        cin >> arr2[i];
        min2 = min(min2, arr2[i]);
        sum2 += arr2[i];
    }

    long long result = min(min1 * n + sum2, min2 * n + sum1);
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

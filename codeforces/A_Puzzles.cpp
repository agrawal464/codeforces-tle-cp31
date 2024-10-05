#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> k >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long mini = LLONG_MAX;  
    for(int i = 0; i <= n - k; i++) { 
        mini = min(mini, arr[i + k - 1] - arr[i]);
    }
    cout << mini << endl;
    return 0;
}

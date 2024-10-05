#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = arr[0];
    for(int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
        if(result == 1) {
            break;
        }
    }

    bool x = false;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(gcd(arr[i], arr[j]) <= 2) {
                x = true;
            }
        }
    }
    
    if(result > n) {
        cout << "No" << endl;
    } else if(x) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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

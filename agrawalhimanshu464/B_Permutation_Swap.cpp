#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int temp = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        temp = __gcd(temp, abs(arr[i] - (i + 1)));
    }
    cout << temp << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

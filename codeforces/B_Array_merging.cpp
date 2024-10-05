#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);  
    vector<int> v(n);  

    for(auto &i: arr) {
        cin >> i;
    }
    for(auto &i : v) {
        cin >> i;
    }

    
    vector<int> mp(2*n+1), mpp(2*n+1);

   
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        int cnt = 0;
        while (i < n && val == arr[i]) {
            cnt++;
            i++;
        }
        i--; 
        mp[val] = max(mp[val], cnt);
    }

   
    for (int i = 0; i < n; i++) {
        int val = v[i];
        int cnt = 0;
        while (i < n && val == v[i]) {
            cnt++;
            i++;
        }
        i--;
        mpp[val] = max(mpp[val], cnt);
    }

    
    int ans = 0;
    for (int i=0;i<=2*n;i++) {
        ans = max(ans, mp[i] + mpp[i]);  
    }

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

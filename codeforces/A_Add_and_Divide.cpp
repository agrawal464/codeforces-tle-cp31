#include <bits/stdc++.h>
using namespace std;


void solve() {
    unsigned long long a, b;  
    cin >> a >> b;
    int ans = INT_MAX;
    for(int i=0;i<31;i++){
        long long B = b+i;
        int cnt = i;
        long long A = a;

        if(B==1)continue;
        while (A > 0) {
            A = A / B;
            cnt++;
        }
        ans = min(ans,cnt);
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

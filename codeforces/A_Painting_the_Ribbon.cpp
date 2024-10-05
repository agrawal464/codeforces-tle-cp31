#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int ans = (n+m-1)/m;
     if (ans+k>=n) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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
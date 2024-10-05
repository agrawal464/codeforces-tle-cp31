#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long>arr(n);
    long long ans = b;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        ans+=min(a-1,arr[i]);
    }
    cout<<ans<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
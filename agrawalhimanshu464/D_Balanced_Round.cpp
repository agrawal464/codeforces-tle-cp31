#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int cnt=1,ans=1;
    for(int i=1;i<n;i++){
        if(arr[i] - arr[i-1] > k){
            cnt = 1;
        }
        else{
            cnt++;
        }
        ans = max(cnt,ans);
    }
    cout<< n-ans << endl;

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
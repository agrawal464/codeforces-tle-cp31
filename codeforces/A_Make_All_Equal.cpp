#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i:arr){
        mpp[i]++;
    }
    int ans=0;
    for(auto i:mpp)
    {
        ans=max(ans,i.second);
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
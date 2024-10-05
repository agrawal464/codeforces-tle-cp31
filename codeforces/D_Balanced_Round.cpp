#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Your code here
    long long n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long cnt=1;
    long ans = 1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i] - arr[i-1] > k){
                cnt =1;
        }
        else{
            cnt++;
        }
        ans = max(ans,cnt);
    }
    cout<< n-ans <<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
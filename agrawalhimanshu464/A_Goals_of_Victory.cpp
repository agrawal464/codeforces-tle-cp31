#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum=0;
    vector<int> arr(n);
    for(int i=1;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sum=-sum;
    cout<<sum<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
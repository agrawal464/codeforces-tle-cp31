#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt1=0,cnt0=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x==1){
            cnt1++;
        }
        if(x==0){
            cnt0++;
        }
    }
    long long c = pow(2,cnt0) * cnt1;
    cout<< c<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
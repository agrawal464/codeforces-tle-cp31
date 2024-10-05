#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,s,m;
    cin>> n >> s >> m;
    int sum=0;
    for(int i=0;i<n;i++){
        int l,r;
        cin>> l >> r;

        sum += ((r-l)+1);
    }
    cout<<sum;
    int x = m - sum;
    int y = s-1;
    cout<<x<<y;
    if(x >= y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2!=0) cnt++;
    }
    if(cnt%2==0) cout<<"YES"<<endl;
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
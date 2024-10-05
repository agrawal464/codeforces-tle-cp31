#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    bool ok = false;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && a[i+1]=='1'){
            ok = true;
        }
    }

    if(ok){
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
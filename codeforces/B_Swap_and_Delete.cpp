#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    int n = s.length();
    int cnt=0,cnt0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
        else if(s[i]=='0'){
            cnt0++;
        }
    }
    int index=-1;
    for (int i=0;i<n;i++){
        if(s[i]=='1'){
            if(cnt0 == 0){
                index=i;
            }
            cnt0--;
        }
        else if(s[i]=='0'){
            if(cnt == 0){
                index=i;
            }
            cnt--;
        }
    }
    if(index==-1){
        cout<<0<<endl;
    }
    else{
        cout<<n-index<<endl;
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
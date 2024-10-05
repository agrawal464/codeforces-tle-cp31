#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans= INT_MIN;
    int cnt =1;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        ans = max(ans,cnt);
    }
    cout<< ans+1 << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
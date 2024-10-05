#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,c=0;
    int ans =INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i] == '.'){
            c++;
            cnt++;
        }
        else{
            cnt=0;
        }
        ans = max(ans,cnt);
    }
    if(ans>=3){
        cout<< 2 << endl;
    }
    else{
        cout<< c << endl;
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
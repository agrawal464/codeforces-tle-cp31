#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int mi = INT_MAX;
    int maxi = INT_MIN;
      for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            cnt++;
            mi = min(mi,i);
            maxi = max(maxi,i);
        }
    }
    if(cnt % 2 != 0 || (cnt==2  && maxi - mi == 1) ){
        cout << "NO" << endl;
    }
    else{
        cout<< "YES" << endl;
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
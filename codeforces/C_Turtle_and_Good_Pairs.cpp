#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    for(int i=0;i<n/2;i++){
        cout<< s[i] << s[n-i-1] ;
    }
    if(n&1){
        cout<< s[n/2];
    }
    cout<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
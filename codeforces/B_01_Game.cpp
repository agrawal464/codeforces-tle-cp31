#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int cnt = count(s.begin(), s.end(), '1');
    int cnt0 = count(s.begin(), s.end(), '0');
    
    
    if(min(cnt ,cnt0)%2==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
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
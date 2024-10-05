#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >>n;

    if(n==2){
        cout<<"YES"<<endl;
        cout<< 1 << " " << 2 << endl;
    }
    else if(n==1){
        cout<< "YES" <<endl;
        cout<< 1 << endl;
    }
    else{
        cout<< "NO" <<endl;
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
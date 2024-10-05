#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    cout<<(n + 1) / 2 <<endl;
    int l=1;
    int r = 3*n;
    while(l<r){
        cout<< l <<" " << r<<endl;
        l+=3;
        r-=3;
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
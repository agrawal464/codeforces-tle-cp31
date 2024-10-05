#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , r, b;
    cin>> n >> r >> b;

    int p = r/(b+1);
    int q = r % (b + 1);
    for(int i=0;i<q;i++){
        cout<<string(p+1,'R')<<'B';
    }
    for(int i=q;i<b;i++){
        cout<<string(p,'R')<<'B';
    }
    cout<<string(p,'R')<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
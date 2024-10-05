#include<bits/stdc++.h>
using namespace std;

void solve(){
    unsigned long long n, k;
    cin >> n >> k;
    if(n%2!=0 && k%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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

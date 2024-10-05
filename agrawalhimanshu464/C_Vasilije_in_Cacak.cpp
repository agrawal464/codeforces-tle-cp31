#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;

    long long minsum = (k*(k+1))/2;
    long long maxsum = (k*(2*n-k+1))/2;
    if(x<minsum || x>maxsum){
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
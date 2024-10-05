#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int k;
    for(int i=0;i<32;i++){
        if(pow(2,i)<n) {
            k = pow(2,i);
        }
    }

    for(int i=1;i<k;i++){
        cout<<i<<" ";
    }
    cout<< 0 <<" "<< k <<" ";

    for(int i=k+1;i<n;i++){
        cout<< i <<" ";
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
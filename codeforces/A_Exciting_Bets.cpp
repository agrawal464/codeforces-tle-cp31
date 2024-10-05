#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;

    if(n==k){
        cout<< 0 <<" "<< 0 <<endl;
    }
    else{
        long long m = abs(n-k);
        cout<< m <<" ";
        cout<< min(n%m,m-n%m)<<endl;
        
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
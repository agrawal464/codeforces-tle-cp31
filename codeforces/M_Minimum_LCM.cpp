#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a = n/i;
            break;
        }
    }
    cout<< a <<" "<<n-a<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
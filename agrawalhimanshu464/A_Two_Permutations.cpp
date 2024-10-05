#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;

    if(n==b || n==a){
        if(a==n && n==b){
        cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(n-(a+b)>=2){
            cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
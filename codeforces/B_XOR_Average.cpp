#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n&1){
        for(int i=0;i<n;i++){
            cout<<"1 ";
        }
    }
    else{
        cout<<"1 3 ";
        for(int i=2;i<n;i++){
            cout<<"2 ";
        }
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
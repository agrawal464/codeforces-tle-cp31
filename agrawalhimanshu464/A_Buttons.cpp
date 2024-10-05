#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if(c%2==0){
        if(a>b){
        cout<< "First" <<endl;
        }
        else{
            cout<< "Second" <<endl;
        }
    }
    else{
        if(b>a){
        cout<< "Second" <<endl;
        }
        else{
            cout<< "First" <<endl;
        }
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
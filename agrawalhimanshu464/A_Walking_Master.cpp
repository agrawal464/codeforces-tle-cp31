#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(d>=b && a-b>=c-d){
        cout<<(d-b) + (a+d-b)-c << endl;
    }
    else{
        cout<<-1 <<endl;
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
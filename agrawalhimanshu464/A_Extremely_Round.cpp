#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=9;i++){
        for(int j=0;;j++){
            int m = i*pow(10,j);
            if(m>n) break;
            cnt++;
        }
    }
    cout<<cnt<<endl;

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
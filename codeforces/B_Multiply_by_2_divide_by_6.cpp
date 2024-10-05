#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin>>n;
        int cnt=0,cnt1=0;
        while(n % 2 == 0){
            cnt++;
            n/=2;
        }
        while( n%3==0){
            cnt1++;
            n/=3;
        }
        if(n==1 && cnt<=cnt1){
            cout<< 2*cnt1 - cnt <<endl;
        }
        else{
            cout<< -1 <<endl;
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
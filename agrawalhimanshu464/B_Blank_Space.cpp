#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    int cnt=0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;

        if(x==0){
            cnt++;
        }
        else{
            cnt=0;
        }
         maxi = max(maxi ,cnt);
    }
    cout<< maxi << endl;    

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}